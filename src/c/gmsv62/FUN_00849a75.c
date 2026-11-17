/* FUN_00849a75 - 0x00849a75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849a75(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x3264) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xe;
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xff000040;
    *(undefined4 *)(unaff_EBP + -0x20) = 0xffffff20;
    iVar1 = FUN_004029b9(0xa8);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004e86a1();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004f13ee(uVar2);
    FUN_0081420c(0x10f,0x1e,0x102,0x3a,0xc00616fc,1,unaff_EBP + -0x28,1);
    FUN_0047976d(*(undefined4 *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


