/* FUN_0080c20c - 0x0080c20c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080c20c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar5;
  bool bVar6;
  
  FUN_00879bb8();
  uVar2 = (*DAT_0097b704)();
  *(undefined4 *)(extraout_ECX + 0x5ec) = uVar2;
  uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x20);
  iVar4 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar2 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  FUN_004125e6();
  piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x28);
  iVar4 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar2 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  FUN_004125e6();
  bVar6 = DAT_0097c210 == 0;
  if (bVar6) {
    DAT_0097c210 = extraout_ECX;
  }
  uVar2 = (*DAT_0097b538)(4,s_Nexon_MapleStory_WebBrowserUI_008f28e0,&DAT_00978474,0x44000000,
                          *(int *)(extraout_ECX + 0x5bc) + *(int *)(unaff_EBP + -0x1c),
                          *(int *)(extraout_ECX + 0x5b4) + *(int *)(unaff_EBP + -0x18),
                          (*(int *)(unaff_EBP + -0x24) - *(int *)(extraout_ECX + 0x5bc)) -
                          *(int *)(extraout_ECX + 0x5c0),
                          (*(int *)(unaff_EBP + -0x20) - *(int *)(extraout_ECX + 0x5b4)) -
                          *(int *)(extraout_ECX + 0x5b8),*(undefined4 *)(DAT_00973cd8 + 4),0,
                          DAT_0097c27c,0);
  *(undefined4 *)(extraout_ECX + 0x598) = uVar2;
  if (bVar6) {
    DAT_0097c210 = 0;
  }
  if (*(int *)(extraout_ECX + 0x598) == 0) {
    GetLastError();
  }
  else {
    AttachThreadInput(*(DWORD *)(extraout_ECX + 0x590),*(DWORD *)(extraout_ECX + 0x5f0),1);
    iVar4 = (*DAT_0097b550)(*(undefined4 *)(extraout_ECX + 0x598),0xffffffeb,extraout_ECX);
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iVar4 = (*DAT_0097b65c)(&DAT_008f3994,0,3,&DAT_008f37d4,unaff_EBP + -0x10);
      piVar3 = *(int **)(unaff_EBP + -0x10);
      if ((iVar4 < 0) || (piVar3 == (int *)0x0)) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        FUN_0080c4f5((int *)(extraout_ECX + 0x59c),piVar3,&DAT_008f39c4);
        if (*(int *)(extraout_ECX + 0x59c) != 0) {
          uVar5 = -(uint)(extraout_ECX != 0) & extraout_ECX + 0x578U;
          iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                            (*(int **)(unaff_EBP + -0x10),uVar5);
          if ((((-1 < iVar4) &&
               (iVar4 = (*DAT_0097b504)(unaff_EBP + -0x38,*(undefined4 *)(unaff_EBP + -0x1c),
                                        *(undefined4 *)(unaff_EBP + -0x18),
                                        ((*(int *)(unaff_EBP + -0x24) -
                                         *(int *)(extraout_ECX + 0x5c0)) -
                                        *(int *)(extraout_ECX + 0x5bc)) +
                                        *(int *)(unaff_EBP + -0x1c),
                                        ((*(int *)(unaff_EBP + -0x20) -
                                         *(int *)(extraout_ECX + 0x5b8)) -
                                        *(int *)(extraout_ECX + 0x5b4)) +
                                        *(int *)(unaff_EBP + -0x18)), iVar4 != 0)) &&
              (iVar4 = FUN_004522da(*(undefined4 *)(extraout_ECX + 0x59c),uVar5,&DAT_008f39b4,
                                    extraout_ECX + 0x5a0), -1 < iVar4)) &&
             (iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x2c))
                                (*(int **)(unaff_EBP + -0x10),0xfffffffb,0,uVar5,0,
                                 *(undefined4 *)(extraout_ECX + 0x598),unaff_EBP + -0x38),
             -1 < iVar4)) {
            puVar1 = *(undefined4 **)(extraout_ECX + 0x59c);
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(puVar1,&DAT_008f3764,unaff_EBP + -0x14);
            }
            piVar3 = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (piVar3 != (int *)0x0) {
              iVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,unaff_EBP + -0x38,unaff_EBP + -0x38);
              if (-1 < iVar4) {
                *(undefined4 *)(extraout_ECX + 0x5ec) = 0;
                uVar2 = 1;
                *(undefined4 *)(extraout_ECX + 0x5e8) = 1;
                piVar3 = *(int **)(unaff_EBP + -0x14);
                *(undefined1 *)(unaff_EBP + -4) = 2;
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 8))(piVar3);
                }
                piVar3 = *(int **)(unaff_EBP + -0x10);
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 8))(piVar3);
                }
                goto LAB_0080c4e6;
              }
              piVar3 = *(int **)(unaff_EBP + -0x14);
              *(undefined1 *)(unaff_EBP + -4) = 2;
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 8))(piVar3);
              }
            }
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar3 = *(int **)(unaff_EBP + -0x10);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
  }
  uVar2 = 0;
LAB_0080c4e6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


