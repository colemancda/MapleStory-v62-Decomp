/* FUN_0066a2b3 - 0x0066a2b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0066a2b3(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  _memset(param_1,0,0x1b8);
  uVar1 = FUN_00413367(param_2 + 0x70,*(undefined4 *)(param_2 + 0x78));
  *param_1 = uVar1;
  FUN_00879c20(param_1 + 1,param_2 + 0x118,0x20);
  uVar1 = FUN_00413367(param_2 + 0xb8,*(undefined4 *)(param_2 + 0xc0));
  param_1[9] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xc4,*(undefined4 *)(param_2 + 0xcc));
  param_1[0xd] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xd0,*(undefined4 *)(param_2 + 0xd8));
  param_1[0x11] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xdc,*(undefined4 *)(param_2 + 0xe4));
  param_1[0x15] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xe8,*(undefined4 *)(param_2 + 0xf0));
  param_1[0x19] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xf4,*(undefined4 *)(param_2 + 0xfc));
  param_1[0x1d] = uVar1;
  iVar2 = FUN_00413367(param_2 + 0x40,*(undefined4 *)(param_2 + 0x48));
  if (iVar2 == 3) {
    uVar1 = *(undefined4 *)(param_2 + 0xa8);
    iVar2 = param_2 + 0xa0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    iVar2 = param_2 + 0x94;
  }
  uVar1 = FUN_00413367(iVar2,uVar1);
  param_1[0x21] = uVar1;
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_2 + 0x150);
  uVar1 = FUN_004cd670(param_2 + 0x188,*(undefined4 *)(param_2 + 400));
  param_1[0x68] = uVar1;
  return;
}


