/* FUN_007e58c3 - 0x007e58c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e58c3(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00414edd(&DAT_00978474,0xffffffff);
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007e59f9(uVar2,unaff_EBP + -0x10,0);
  pcVar3 = *(char **)(unaff_EBP + -0x10);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) goto LAB_007e59dc;
  cVar1 = *pcVar3;
  if (cVar1 != '\r') {
    if (cVar1 == '#') {
      FUN_0045efbb(pcVar3,*(undefined4 *)(pcVar3 + -4));
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      uVar6 = FUN_0045e053(unaff_EBP + 8,uVar6,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      FUN_007e5aaf(uVar2,*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_007e59dc;
    }
    if (cVar1 != '\\') {
      FUN_007e5bb0(uVar2,*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_007e59dc;
    }
  }
  FUN_0045efbb(pcVar3,*(undefined4 *)(pcVar3 + -4));
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
  }
  uVar5 = FUN_0045e053(unaff_EBP + -0x14,uVar5,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  FUN_007e59f9(uVar2,unaff_EBP + -0x10,1);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  if (iVar4 != 0) {
    uVar6 = *(undefined4 *)(iVar4 + -4);
  }
  FUN_0045efbb(iVar4,uVar6);
LAB_007e59dc:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


