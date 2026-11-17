/* FUN_0080c98d - 0x0080c98d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080c98d(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  BOOL bRepaint;
  
  FUN_00879bb8();
  FUN_0041f52d();
  (*DAT_0097b664)(0);
  *(undefined4 *)(unaff_EBP + -0x70) = DAT_0097c27c;
  *(undefined4 *)(unaff_EBP + -0x80) = 0x3080;
  *(code **)(unaff_EBP + -0x7c) = FUN_0080c5e0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(char **)(unaff_EBP + -0x5c) = s_Nexon_MapleStory_WebBrowserUI_008f28e0;
  (*DAT_0097b554)(unaff_EBP + -0x80);
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX + 0x38;
  do {
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    while ((*(int *)(extraout_ECX + 0x48) != 0 &&
           (piVar3 = *(int **)(extraout_ECX + 0x4c), *(int *)(extraout_ECX + 0x54) == 0))) {
      iVar5 = *piVar3;
      if (iVar5 == 0) {
        iVar5 = FUN_0080c20c();
        if (iVar5 == 0) {
          *(undefined4 *)(extraout_ECX + 0x54) = 1;
        }
        else {
          *(undefined4 *)(extraout_ECX + 0x58) = 1;
        }
      }
      else if (iVar5 == 1) {
        if (*(int *)(extraout_ECX + 0x58) != 0) {
          piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x28);
          iVar5 = *piVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar5 == 0) {
            FUN_00878dfb(0x80004003);
          }
          *(int *)(unaff_EBP + 0xc) = *piVar3;
          piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x24);
          iVar5 = *piVar3;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar5 == 0) {
            FUN_00878dfb(0x80004003);
          }
          bRepaint = 1;
          *(int *)(unaff_EBP + -0x20) = *piVar3;
          iVar5 = FUN_0040e53d();
          iVar5 = (iVar5 - *(int *)(extraout_ECX + 0x2c)) - *(int *)(extraout_ECX + 0x28);
          iVar4 = FUN_0040e48b();
          iVar6 = (**(code **)(*(int *)(extraout_ECX + -0x588) + 0x30))();
          iVar6 = iVar6 + *(int *)(extraout_ECX + 0x28);
          iVar7 = (**(code **)(*(int *)(extraout_ECX + -0x588) + 0x2c))();
          MoveWindow(*(HWND *)(extraout_ECX + 0xc),iVar7 + *(int *)(extraout_ECX + 0x30),iVar6,iVar4
                     ,iVar5,bRepaint);
          piVar3 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          piVar3 = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0080cb63:
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
      }
      else if (iVar5 == 2) {
        if (*(int *)(extraout_ECX + 0x58) != 0) {
          piVar2 = (int *)FUN_00448dc6(unaff_EBP + -0x14);
          piVar3 = *(int **)(unaff_EBP + -0x14);
          *(bool *)(unaff_EBP + 0xf) = *piVar2 != 0;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          if (*(char *)(unaff_EBP + 0xf) != '\0') {
            *(undefined4 *)(unaff_EBP + -0x3c) = 0;
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
            piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x18);
            iVar5 = *piVar3;
            *(undefined1 *)(unaff_EBP + -4) = 4;
            if (iVar5 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar4 = FUN_0040e48b();
            iVar5 = *(int *)(extraout_ECX + 0x34);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            *(int *)(unaff_EBP + -0x34) = (iVar4 - iVar5) - *(int *)(extraout_ECX + 0x30);
            piVar3 = *(int **)(unaff_EBP + -0x18);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
            }
            piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x1c);
            iVar5 = *piVar3;
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (iVar5 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar4 = FUN_0040e53d();
            iVar5 = *(int *)(extraout_ECX + 0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            *(int *)(unaff_EBP + -0x30) = (iVar4 - iVar5) - *(int *)(extraout_ECX + 0x28);
            piVar3 = *(int **)(unaff_EBP + -0x1c);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
            }
            puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
            piVar2 = (int *)0x0;
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(puVar1,&DAT_008f3734,unaff_EBP + -0x10);
              piVar2 = *(int **)(unaff_EBP + -0x10);
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            piVar3 = (int *)0x0;
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 0xc))
                        (piVar2,1,0,0,0,0,*(undefined4 *)(extraout_ECX + 0x24),unaff_EBP + -0x3c,0,0
                         ,0);
              piVar3 = *(int **)(unaff_EBP + -0x10);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            goto LAB_0080cb63;
          }
        }
      }
      else if (iVar5 == 3) {
        if (*(int *)(extraout_ECX + 0x60) == 0) {
          FUN_0080c523(piVar3[1]);
        }
        else {
          puVar1 = (undefined4 *)FUN_0080cecf();
          *puVar1 = 3;
          FUN_00419192(piVar3 + 1);
        }
      }
      FUN_0080cf12(*(undefined4 *)(extraout_ECX + 0x4c));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar3 = (int *)(extraout_ECX + 0x3c);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(extraout_ECX + 0x38) = 0;
    }
    if (*(int *)(extraout_ECX + 0x54) != 0) {
      piVar3 = *(int **)(extraout_ECX + 0x10);
      if (piVar3 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar3 + 0x7c))(piVar3,unaff_EBP + 0xe);
        if ((-1 < iVar5) && (*(short *)(unaff_EBP + 0xe) == -1)) {
          (**(code **)(**(int **)(extraout_ECX + 0x10) + 0x38))(*(int **)(extraout_ECX + 0x10));
        }
        (**(code **)(**(int **)(extraout_ECX + 0x10) + 0x80))(*(int **)(extraout_ECX + 0x10));
        FUN_00452368(*(undefined4 *)(extraout_ECX + 0x10),&DAT_008f39b4,
                     *(undefined4 *)(extraout_ECX + 0x14));
        piVar3 = *(int **)(extraout_ECX + 0x10);
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(extraout_ECX + 0x10) = 0;
          (**(code **)(*piVar3 + 8))(piVar3);
        }
      }
      AttachThreadInput(*(DWORD *)(extraout_ECX + 4),*(DWORD *)(extraout_ECX + 100),0);
      if (*(int *)(extraout_ECX + 0xc) != 0) {
        (*DAT_0097b518)(*(int *)(extraout_ECX + 0xc));
        *(undefined4 *)(extraout_ECX + 0xc) = 0;
      }
      (*DAT_0097b5e8)(s_Nexon_MapleStory_WebBrowserUI_008f28e0,DAT_0097c27c);
      (*DAT_0097b660)();
      *(undefined4 *)(extraout_ECX + 0x54) = 0;
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return 0;
    }
    do {
      iVar5 = (*DAT_0097b5e0)(unaff_EBP + -0x58,0,0,0,1);
      if (iVar5 == 0) break;
      (*DAT_0097b528)(unaff_EBP + -0x58);
      (*DAT_0097b524)(unaff_EBP + -0x58);
    } while (*(int *)(extraout_ECX + 0x54) == 0);
  } while( true );
}


