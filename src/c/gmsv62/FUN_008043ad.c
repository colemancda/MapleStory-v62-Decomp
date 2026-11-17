/* FUN_008043ad - 0x008043ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008043ad(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14) + -4;
  }
  if ((*(uint *)(iVar5 + 0x52c) & 0xfffffffe) == 0x12) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_0048bb31(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x124));
  }
  if ((*(uint *)(iVar5 + 0x52c) & 0xfffffffe) == 0x12) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x110);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x140);
  FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
  uVar6 = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    if (*(int *)(param_1 + 0x118) != 0) {
      uVar6 = 0xf;
    }
  }
  else {
    uVar6 = 0x11;
  }
  uVar1 = __ftol(uVar7);
  uVar2 = __ftol(uVar1);
  uVar3 = __ftol(uVar2);
  uVar4 = __ftol(uVar3);
  FUN_005e48d3(uVar6,local_c,*(undefined4 *)(param_1 + 0x118),local_8,uVar4,uVar3,uVar2,uVar1,uVar7)
  ;
  return;
}


