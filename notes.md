# Notes: TSerialChip Reconstruction

## Sources
- `MP2x00US.s`: Main assembly file.
- `Includes/HAL/SerialChip.h`: V1 protocol definition.
- `Includes/HAL/SerialChipV2.h`: V2 protocol definition.

## Initial Analysis Findings
- `TSerialChip` is a protocol (glue) class in the assembly at `0x384B0C`.
- It acts as a proxy/delegate to an underlying implementation object.
- It has two fields:
  - `fField4`: Pointer to the implementation object.
  - `fField8`: Pointer to the implementation's function table.
- Most methods simply forward the call to the function table at a specific offset.

## VTable / Function Table Offsets (from TSerialChip glue)
- `New`: `0x384B0C`
- `Delete`: `0x384B38` (VTable offset 12 / 0x0C)
- `InstallChipHandler`: `0x384B54` (VTable offset 16 / 0x10)
- `RemoveChipHandler`: `0x384B60` (VTable offset 20 / 0x14)
- `PutByte`: `0x384B6C` (VTable offset 24 / 0x18)
- `ResetTxBEmpty`: `0x384B78` (VTable offset 28 / 0x1C)
- `GetByte`: `0x384B84` (VTable offset 32 / 0x20)
- `TxBufEmpty`: `0x384B90` (VTable offset 36 / 0x24)
- `RxBufFull`: `0x384B9C` (VTable offset 40 / 0x28)
- `GetRxErrorStatus`: `0x384BA8` (VTable offset 44 / 0x2C)
- `GetSerialStatus`: `0x384BB4` (VTable offset 48 / 0x30)
- `ResetSerialStatus`: `0x384BC0` (VTable offset 52 / 0x34)
- `SetSerialOutputs`: `0x384BCC` (VTable offset 56 / 0x38)
- `ClearSerialOutputs`: `0x384BD8` (VTable offset 60 / 0x3C)
- `GetSerialOutputs`: `0x384BE4` (VTable offset 64 / 0x40)
- `PowerOff`: `0x384BF0` (VTable offset 68 / 0x44)
- `PowerOn`: `0x384BFC` (VTable offset 72 / 0x48)
- `PowerIsOn`: `0x384C08` (VTable offset 76 / 0x4C)
- `SetInterruptEnable`: `0x384C14` (VTable offset 80 / 0x50)
- `Reset`: `0x384C20` (VTable offset 84 / 0x54)
- `SetBreak`: `0x384C2C` (VTable offset 88 / 0x58)
- `SetSpeed`: `0x384C38` (VTable offset 92 / 0x5C)
- `SetIOParms`: `0x384C44` (VTable offset 96 / 0x60)
- `Reconfigure`: `0x384C50` (VTable offset 100 / 0x64)
- `Init`: `0x384C5C` (VTable offset 104 / 0x68)
- `CardRemoved`: `0x384C68` (VTable offset 108 / 0x6C)
- `GetFeatures`: `0x384C74` (VTable offset 112 / 0x70)
- `InitByOption`: `0x384C80` (VTable offset 116 / 0x74)
- `ProcessOption`: `0x384C8C` (VTable offset 120 / 0x78)
- `SetSerialMode`: `0x384C98` (VTable offset 124 / 0x7C)
- `SysEventNotify`: `0x384CA4` (VTable offset 128 / 0x80)
- `SetTxDTransceiverEnable`: `0x384CB0` (VTable offset 132 / 0x84)
- `GetByteAndStatus`: `0x384CBC` (VTable offset 136 / 0x88)
- `SetIntSourceEnable`: `0x384CC8` (VTable offset 140 / 0x8C)
- `AllSent`: `0x384CD4` (VTable offset 144 / 0x90)
- `ConfigureForOutput`: `0x384CE0` (VTable offset 148 / 0x94)
- `InitTxDMA`: `0x384CEC` (VTable offset 152 / 0x98)
- `InitRxDMA`: `0x384CF8` (VTable offset 156 / 0x9C)
- `TxDMAControl`: `0x384D04` (VTable offset 160 / 0xA0)
- `RxDMAControl`: `0x384D10` (VTable offset 164 / 0xA4)
- `SetSDLCAddress`: `0x384D1C` (VTable offset 168 / 0xA8)
- `ReEnableReceiver`: `0x384D28` (VTable offset 172 / 0xAC)
- `LinkIsFree`: `0x384D34` (VTable offset 176 / 0xB0)
- `SendControlPacket`: `0x384D40` (VTable offset 180 / 0xB4)
- `WaitForPacket`: `0x384D4C` (VTable offset 184 / 0xB8)
- `WaitForAllSent`: `0x384D58` (VTable offset 188 / 0xBC)

## Field Map
- `fField4`: Implementation Object Pointer
- `fField8`: Protocol Function Table Pointer
