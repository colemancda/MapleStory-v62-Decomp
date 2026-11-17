/* FUN_00615303 - 0x00615303 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00615303(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(extraout_ECX + 0xe8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((0x7fffffff < uVar4) && (*(int *)(extraout_ECX + 0xa4) == 0)) &&
     (499 < *(int *)(extraout_ECX + 0xa8))) {
    iVar2 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 8))();
    if ((iVar2 != 0) && (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x528) < 1)) {
      uVar7 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_0045ed72(0);
      uVar7 = FUN_0045ee27(uVar7);
      FUN_00414f8b(uVar7);
      piVar5 = (int *)(extraout_ECX + 0x88);
      iVar2 = FUN_0045ec92(*(int *)(extraout_ECX + 0x78) + 4);
      if (iVar2 == 0) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
        }
        if (*piVar5 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*piVar5 + -4);
        }
        if (iVar3 < iVar2) {
          if (*piVar5 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(*piVar5 + -4);
          }
          FUN_0045e070(unaff_EBP + -0x18,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uVar7 = FUN_0045ec92(piVar5);
          *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            if (*piVar5 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(*piVar5 + -4);
            }
            FUN_0045e053(unaff_EBP + -0x1c,uVar7,0xffffffff);
            uVar7 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_0045ed72(0);
            uVar7 = FUN_0045ee27(uVar7);
            FUN_00414f8b(uVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            while( true ) {
              FUN_00414ebb();
              if (((*(char **)(unaff_EBP + 8) == (char *)0x0) ||
                  (cVar1 = **(char **)(unaff_EBP + 8), cVar1 == '\0')) ||
                 ((cVar1 != '!' && ((cVar1 != ',' && (cVar1 != '~')))))) break;
              FUN_0045e053(unaff_EBP + -0x20,1,0xffffffff);
              uVar7 = 0;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              FUN_0045ed72(0);
              uVar7 = FUN_0045ee27(uVar7);
              FUN_00414f8b(uVar7);
              *(undefined1 *)(unaff_EBP + -4) = 0;
            }
            *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          }
        }
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      while( true ) {
        iVar2 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x44);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + -4);
        }
        if (iVar2 <= *(int *)(unaff_EBP + -0x10)) break;
        piVar5 = (int *)(*(int *)(*(int *)(extraout_ECX + 0x78) + 0x44) +
                        *(int *)(unaff_EBP + -0x18));
        iVar2 = FUN_00614192();
        if (*piVar5 <= iVar2) {
          iVar2 = FUN_00614192();
          if (iVar2 <= piVar5[1]) {
            uVar4 = 0;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            while( true ) {
              if ((piVar5[4] == 0) || (*(uint *)(piVar5[4] + -4) <= uVar4)) goto LAB_00615506;
              iVar2 = FUN_0045ec92(unaff_EBP + 8);
              if (iVar2 != 0) break;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
              uVar4 = *(uint *)(unaff_EBP + -0x14);
            }
            uVar4 = *(uint *)(unaff_EBP + -0x14);
LAB_00615506:
            if ((piVar5[4] != 0) && (uVar4 < *(uint *)(piVar5[4] + -4))) break;
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1c;
      }
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x44);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      bVar6 = *(int *)(unaff_EBP + -0x10) != iVar2;
      if (bVar6) {
        FUN_0060142b(0x8e,0,0);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00457fa0(extraout_ECX + 0x90,8);
        FUN_00457cda(*(undefined4 *)(unaff_EBP + -0x1c));
        FUN_00457cda(*(undefined4 *)(unaff_EBP + -0x10));
        FUN_004751b2(unaff_EBP + -0x30);
        *(undefined4 *)(extraout_ECX + 0xa4) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0045ebca();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_006155b9;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  bVar6 = false;
LAB_006155b9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar6;
}


