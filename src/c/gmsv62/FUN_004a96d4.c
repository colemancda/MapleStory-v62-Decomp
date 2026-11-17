/* FUN_004a96d4 - 0x004a96d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a96d4(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x5c);
  piVar1 = (int *)(extraout_ECX + 0x5c);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar7 = extraout_ECX;
  if (((-1 < iVar4) &&
      (piVar2 = (int *)(extraout_ECX + 0x40), iVar4 != *(int *)(extraout_ECX + 0x40))) &&
     (-1 < iVar4)) {
    if (*(int *)(extraout_ECX + 0x34) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
    }
    if ((iVar4 <= iVar3) && (-1 < *piVar2)) {
      if (*(int *)(extraout_ECX + 0x34) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
      }
      if (*piVar2 <= iVar4) {
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_004a9811();
        }
        if (*piVar2 < *piVar1) {
          FUN_004459fe(piVar1,piVar2);
        }
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iVar4 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar5 = FUN_0045e053(unaff_EBP + -0x10,0,iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414f8b(uVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        piVar6 = (int *)FUN_0045e053(unaff_EBP + -0x10,*piVar2,0xffffffff);
        iVar4 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar4 + -4);
        }
        FUN_0045efbb(iVar4,uVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        FUN_00414f8b(unaff_EBP + 8);
        iVar4 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *piVar2 = iVar4;
        FUN_00414ebb();
        iVar7 = *(int *)(unaff_EBP + -0x14);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *piVar1 = *(int *)(iVar7 + 0x40);
  return;
}


