/* FUN_007667f6 - 0x007667f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007667f6(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  FUN_00445a30();
  if (*(int *)(extraout_ECX + 0x668 + iVar2 * 4) != 0) {
    puVar1 = (undefined4 *)FUN_0045f1e3(0xffffffff);
    *puVar1 = *(undefined4 *)(extraout_ECX + 0x668 + iVar2 * 4);
  }
  FUN_0044590d();
  iVar2 = *(int *)(extraout_ECX + 0x60c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_0043f124(iVar2 + 4);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar4 = (int *)(unaff_EBP + -0x1a7);
  do {
    iVar2 = *piVar4;
    if (((iVar2 != 0) && (0 < iVar2)) &&
       ((iVar2 / 10000 == 0xb5 || ((iVar2 == 0x1bcd30 || (iVar2 == 0x1bf440)))))) {
      if ((iVar2 != 0x1ba623) && (iVar2 != 0x1ba622)) {
        iVar2 = *(int *)(unaff_EBP + -0x10);
        if (iVar2 < 0x2e) {
          if (iVar2 < 0x27) {
            if (((((iVar2 < 0x15) || (iVar2 < 0x18)) || (iVar2 < 0x1a)) ||
                ((iVar2 < 0x1e || (iVar2 < 0x1f)))) || (0x25 < iVar2)) goto LAB_007668d0;
LAB_00766915:
            iVar2 = 1;
          }
          else {
LAB_00766910:
            iVar2 = 2;
          }
        }
        else {
          if (iVar2 != 0x2e) {
            if (iVar2 == 0x2f) goto LAB_00766915;
            if (iVar2 == 0x30) goto LAB_00766910;
          }
LAB_007668d0:
          iVar2 = 0;
        }
        if (iVar2 != *(int *)(unaff_EBP + 8)) goto LAB_007668e4;
      }
      piVar3 = (int *)FUN_0045f1e3(0xffffffff);
      *piVar3 = *piVar4;
    }
LAB_007668e4:
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar4 = piVar4 + 1;
    if (0x30 < *(int *)(unaff_EBP + -0x10)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


