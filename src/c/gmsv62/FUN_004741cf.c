/* FUN_004741cf - 0x004741cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004741cf(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if ((*(int *)(unaff_EBP + -0x1c) != unaff_ESI) &&
     (*(int *)(*(int *)(unaff_EBP + -0x1c) + -4) != unaff_ESI)) {
    FUN_0060142b(0x19,unaff_ESI,unaff_ESI);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x1c) == unaff_ESI) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -4);
    }
    FUN_0045d247(uVar2);
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    if (iVar1 == unaff_ESI) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + -4);
    }
    FUN_00457fa0(iVar1,uVar2);
    FUN_004751b2(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0045ebca();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
    FUN_00475b89(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


