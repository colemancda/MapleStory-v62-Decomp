/* FUN_0050d474 - 0x0050d474 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050d474(void)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  bVar2 = FUN_0042452b();
  if (bVar2 != 0) {
    if (bVar2 < 4) {
      pcVar6 = s_story_00964fc8;
      if (cVar1 != '\0') {
        pcVar6 = s_maple_00964fc0;
      }
      piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x20,0xd0f);
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar4 = FUN_00434e21(unaff_EBP + -0x14,uVar4,pcVar6,bVar2,8);
      FUN_00471102(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iVar5 = *(int *)(unaff_EBP + -0x20);
    }
    else if (bVar2 == 4) {
      if (cVar1 == '\0') {
        pcVar7 = s_story_00964fc8;
        pcVar6 = s_maple_00964fc0;
      }
      else {
        pcVar7 = s_maple_00964fc0;
        pcVar6 = s_story_00964fc8;
      }
      piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x1c,0xd10);
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar4 = FUN_00434e21(unaff_EBP + -0x10,uVar4,pcVar6,pcVar7,8);
      FUN_00471102(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      iVar5 = *(int *)(unaff_EBP + -0x1c);
    }
    else {
      if (bVar2 != 5) goto LAB_0050d603;
      pcVar6 = s_story_00964fc8;
      if (cVar1 != '\0') {
        pcVar6 = s_maple_00964fc0;
      }
      piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x18,0xd11);
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar4 = FUN_00434e21(unaff_EBP + 8,uVar4,pcVar6,8);
      FUN_00471102(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      iVar5 = *(int *)(unaff_EBP + -0x18);
    }
    if (iVar5 != 0) {
      FUN_004030b1();
    }
  }
LAB_0050d603:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


