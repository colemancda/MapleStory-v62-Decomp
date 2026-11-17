/* FUN_0059d833 - 0x0059d833 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0059d869) */

void FUN_0059d833(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  char *_Str1;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0059b928(unaff_EBP + -0x10);
  _Str1 = DAT_00980dfc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    _Str1 = *(char **)(unaff_EBP + -0x10);
  }
  iVar2 = _strcmp(_Str1,&DAT_00978474);
  if (iVar2 != 0) {
    if (DAT_0097c1ac == (int *)0x0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = DAT_0097c1ac;
    uVar3 = FUN_00415015(0,1);
    iVar2 = (**(code **)(*piVar1 + 0x68))(piVar1,uVar3);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00964018);
    }
    if (iVar2 == 1) {
      if (*(int *)(extraout_ECX + 0x394) != 0) {
        if (DAT_0097c1ac == (int *)0x0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_0059dad3();
      }
    }
    else {
      *(undefined4 *)(extraout_ECX + 0x3a8) = 1;
      if (*(int *)(extraout_ECX + 0x394) != 0) {
        if (DAT_0097c1ac == (int *)0x0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_0059dab2();
      }
    }
    FUN_004150c0(0xffffffff);
    FUN_00414f8b(unaff_EBP + -0x10);
    iVar2 = FUN_0059da63(0x5c);
    iVar4 = FUN_0059da63(0x2e);
    if ((iVar2 < 0) || (iVar4 < 0)) {
      FUN_00414edd(&DAT_00978474,0xffffffff);
    }
    else {
      uVar3 = FUN_0045ece0(unaff_EBP + -0x14,iVar2 + 1,iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


