/* FUN_00450197 - 0x00450197 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00450197(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x55c;
  do {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while ((iVar2 = **(int **)(unaff_EBP + -0x20), iVar2 != 0 &&
           (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar2 + -4)))) {
      *(uint *)(unaff_EBP + -0x30) = iVar2 + *(uint *)(unaff_EBP + -0x14) * 4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while ((iVar2 = **(int **)(unaff_EBP + -0x30), iVar2 != 0 &&
             (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar2 + -4)))) {
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x1c) + iVar2);
        if ((*(int *)(unaff_EBP + -0x10) + 0x23 + piVar1[6] < *(int *)(unaff_EBP + 8)) &&
           (((*(int *)(unaff_EBP + 8) < piVar1[8] + *(int *)(unaff_EBP + -0x10) + 0x2b + piVar1[6]
             && (piVar1[7] + 0x1e < *(int *)(unaff_EBP + 0xc))) &&
            (*(int *)(unaff_EBP + 0xc) < piVar1[9] + 0x1e + piVar1[7])))) {
          if (piVar1[1] == 0) {
            if (*piVar1 == 1) {
              FUN_00414f8b(piVar1 + 4);
            }
          }
          else {
            *(int *)(unaff_EBP + -0x24) = piVar1[1];
          }
          if (-1 < piVar1[10]) {
            *(int *)(unaff_EBP + -0x2c) = piVar1[10];
          }
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x3c;
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xdc;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 0x1b8);
  pcVar8 = *(char **)(unaff_EBP + -0x28);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      FUN_0074d6fb();
    }
    else {
      FUN_00554ef3(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x24));
      iVar2 = *(int *)(extraout_ECX + 4);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = *(undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = (**(code **)(iVar2 + 0x30))(uVar4,0,0,0);
      iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar2);
      FUN_00759767(iVar3 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,uVar4,uVar5,uVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(pcVar8);
    iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar2);
    FUN_0074d755(iVar3 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,pcVar8);
  }
  if (*(int *)(extraout_ECX + 0x70) != *(int *)(unaff_EBP + -0x2c)) {
    *(int *)(extraout_ECX + 0x70) = *(int *)(unaff_EBP + -0x2c);
    FUN_008161f1(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


