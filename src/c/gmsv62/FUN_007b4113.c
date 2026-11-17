/* FUN_007b4113 - 0x007b4113 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b4113(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x2454);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    FUN_007b0b2a();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0xb4);
  if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
    FUN_0060142b(0x36,0,0);
    uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x94);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00457d37(uVar1);
    puVar2 = (undefined2 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    FUN_0045d247(*puVar2);
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    FUN_0045d247(*(undefined2 *)(iVar3 + 4));
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0045ebca();
  }
  else {
    FUN_005eb988();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005f171e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


