/* FUN_007ed72c - 0x007ed72c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ed72c(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar2 = *(int *)(extraout_ECX + 0x67c), iVar2 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar2 + -4)))) {
    piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar2);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c + iVar2) - *(int *)(extraout_ECX + 0x88);
    if ((-0x31 < iVar2) && (iVar2 < *(int *)(extraout_ECX + 0x84) + 0x18)) {
      if ((((*(int *)(extraout_ECX + 0x78) + piVar3[6] < *(int *)(unaff_EBP + 8)) &&
           (*(int *)(unaff_EBP + 8) < piVar3[8] + *(int *)(extraout_ECX + 0x78) + 8 + piVar3[6])) &&
          (*(int *)(extraout_ECX + 0x7c) + iVar2 < *(int *)(unaff_EBP + 0xc))) &&
         (*(int *)(unaff_EBP + 0xc) <
          (piVar3[9] - *(int *)(extraout_ECX + 0x88)) + *(int *)(extraout_ECX + 0x7c) + piVar3[7]))
      {
        iVar2 = piVar3[1];
        if (((iVar2 != 0) || (*piVar3 == 1)) &&
           ((*(int *)(unaff_EBP + -0x10) <= *(int *)(extraout_ECX + 0x688) || (piVar3[10] != -1))))
        {
          if (iVar2 == 0) {
            FUN_00414f8b(piVar3 + 4);
          }
          else {
            *(int *)(unaff_EBP + -0x18) = iVar2;
          }
        }
        if (piVar3[10] != -1) {
          *(int *)(unaff_EBP + -0x24) = piVar3[10];
        }
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  pcVar8 = *(char **)(unaff_EBP + -0x20);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_0074d6fb();
    }
    else {
      FUN_00554ef3(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + -0x18));
      iVar2 = *(int *)(extraout_ECX + 4);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = (**(code **)(iVar2 + 0x30))(uVar4,0,0,0);
      iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar2);
      FUN_00759767(iVar1 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,uVar4,uVar5,uVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(pcVar8);
    iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar2);
    FUN_0074d755(iVar1 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,pcVar8);
  }
  if (*(int *)(extraout_ECX + 0xd8) != *(int *)(unaff_EBP + -0x24)) {
    *(int *)(extraout_ECX + 0xd8) = *(int *)(unaff_EBP + -0x24);
    FUN_008161f1(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


