/* FUN_0084b958 - 0x0084b958 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b958(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar1 = FUN_00424561();
  iVar2 = FUN_00849a47(6);
  if (iVar2 == 0) {
    iVar2 = FUN_004029b9(0x110);
    *(int *)(unaff_EBP + 8) = iVar2;
    uVar3 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_004defeb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004e1632(uVar1);
    FUN_008497ad(uVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


