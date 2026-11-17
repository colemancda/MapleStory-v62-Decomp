/* FUN_0069e32b - 0x0069e32b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_0069e32b(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int local_28 [8];
  int local_8;
  
  local_28[0] = -0xdddd78;
  local_28[1] = 0xff222288;
  local_28[2] = 0xff222288;
  local_28[3] = 0xff222288;
  local_28[4] = 0xff222288;
  local_28[5] = 0xff222299;
  local_28[6] = 0xff5555aa;
  piVar2 = (int *)(param_1 + 0x22c);
  local_8 = 0x14;
  puVar4 = (uint *)(param_1 + 0xa0);
  local_28[7] = param_1;
  do {
    uVar1 = FUN_004133f0();
    piVar2[-0x14] = (uVar1 & 1) + 1;
    uVar1 = FUN_004133f0();
    *piVar2 = local_28[uVar1 % 7];
    uVar1 = FUN_004133f0();
    puVar4[-1] = uVar1 % 0x5a;
    uVar1 = FUN_004133f0();
    *puVar4 = uVar1 % 0x2c;
    uVar1 = FUN_004133f0();
    puVar4[0x27] = uVar1 % 0x5a;
    uVar1 = FUN_004133f0();
    iVar3 = local_28[7];
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
    puVar4[0x28] = uVar1 % 0x2c;
    puVar4 = puVar4 + 2;
  } while (local_8 != 0);
  piVar2 = (int *)(local_28[7] + 0x27c);
  local_8 = 6;
  do {
    uVar1 = FUN_004133f0();
    *piVar2 = uVar1 % 0x3c - 0x1e;
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = (int *)(iVar3 + 0x294);
  iVar3 = 6;
  local_8 = 0;
  do {
    uVar1 = FUN_004133f0();
    *piVar2 = uVar1 % 0xe - 7;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1 / 0xe;
}


