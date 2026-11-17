/* FUN_0086192b - 0x0086192b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0086192b(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar3;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_008619ed();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xac) = uVar2;
  iVar1 = FUN_00429303();
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00861a68();
    FUN_005d0f1a((double)fVar3);
    fVar3 = (float10)FUN_00861a68();
    FUN_005d0f1a((double)fVar3);
    if (*(int *)(iVar1 + 0x120) != 0) {
      FUN_0045e3a0();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x6e8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x6e8) + -4);
    }
    FUN_005248c7(*(undefined4 *)(iVar1 + 0x6e8),uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


