/* FUN_0072c5b3 - 0x0072c5b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072c5b3(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((-1 < *(int *)(extraout_ECX + 0x9c)) && (*(int *)(unaff_EBP + 8) == 0x201)) {
    iVar2 = FUN_0072c46f(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if ((-1 < iVar2) &&
       ((iVar2 < 0x25 && (*(char *)(*(int *)(extraout_ECX + 0xa0) + 1 + iVar2 * 2) != '\x02')))) {
      FUN_0045b90e(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piVar3 = (int *)FUN_0072c4ff(unaff_EBP + 0x14,iVar2);
      iVar1 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      if (iVar2 != -1) {
        FUN_0072c10b(iVar2);
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + -4);
      }
      FUN_0072c6a4(uVar4);
      FUN_004a2fef(*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


