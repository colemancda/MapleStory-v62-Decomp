/* FUN_00748389 - 0x00748389 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00748389(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  int *piVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0xce8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  piVar7 = (int *)(extraout_ECX + 0xd2c);
  piVar8 = (int *)(extraout_ECX + 0xc89);
  *(int **)(unaff_EBP + -0x18) = piVar7;
  *(int **)(unaff_EBP + -0x2c) = piVar8;
  iVar2 = extraout_ECX;
  do {
    FUN_00746819(*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x28,unaff_EBP + -0x24);
    if (*(char *)((int)piVar8 + -1) == '\x01') {
      iVar2 = FUN_00455c59(unaff_EBP + -0x40);
      uVar1 = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_0045e7c2(0);
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      }
      iVar2 = *piVar8;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar2 == 0x4f8379) {
        iVar3 = FUN_00650dae(uVar1,ptr_004fa6a2,unaff_EBP + -0x14);
        if (iVar3 < 1) goto LAB_007484e4;
      }
      else {
LAB_007484e4:
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iVar3 = FUN_00650dae(uVar1,iVar2,unaff_EBP + -0x14);
        if (iVar3 < 1) goto LAB_007486e5;
      }
      iVar3 = FUN_006509a1(iVar3);
      iVar2 = iVar3 + 0x1bc;
      iVar4 = FUN_00413367(iVar2,*(undefined4 *)(iVar3 + 0x1c4));
      if (iVar4 != 0) {
        *(undefined4 *)(unaff_EBP + -0x30) = **(undefined4 **)(unaff_EBP + -0x14);
        iVar4 = FUN_004b8f25(unaff_EBP + -0x30,0);
        if (iVar4 != 0) {
          DVar5 = timeGetTime();
          *(DWORD *)(unaff_EBP + -0x38) = DVar5;
          *(undefined4 *)(unaff_EBP + -0x30) = **(undefined4 **)(unaff_EBP + -0x14);
          FUN_004b8f25(unaff_EBP + -0x30,unaff_EBP + -0x34);
          iVar4 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x38);
          if (0 < iVar4) {
            uVar6 = FUN_00413367(iVar2,*(undefined4 *)(iVar3 + 0x1c4));
            uVar1 = *(undefined4 *)(iVar3 + 0x1c4);
            *(undefined4 *)(unaff_EBP + -0x38) = uVar6;
            iVar2 = FUN_00413367(iVar2,uVar1);
            iVar2 = ((*(int *)(unaff_EBP + -0x38) - iVar4 / 1000) * 0xe) / iVar2;
            if ((-1 < iVar2) && (**(int **)(unaff_EBP + -0x18) != iVar2)) {
              **(int **)(unaff_EBP + -0x18) = iVar2;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
              iVar3 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xcec + iVar2 * 4);
              piVar7 = *(int **)(unaff_EBP + -0x10);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (piVar7 == (int *)0x0) {
                FUN_00878dfb(0x80004003);
                piVar7 = *(int **)(unaff_EBP + -0x10);
              }
              iVar2 = *piVar7;
              *(int **)(unaff_EBP + -0x38) = piVar7;
              iVar2 = (**(code **)(iVar2 + 0x80))
                                (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x24),uVar1,
                                 *(undefined4 *)(unaff_EBP + -0x50),
                                 *(undefined4 *)(unaff_EBP + -0x4c),
                                 *(undefined4 *)(unaff_EBP + -0x48),
                                 *(undefined4 *)(unaff_EBP + -0x44));
              if (iVar2 < 0) {
                FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x38),&DAT_00963cc8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 2;
              iVar2 = unaff_EBP + -0x50;
              goto LAB_007486d4;
            }
          }
          goto LAB_007486e5;
        }
      }
      if (-1 < **(int **)(unaff_EBP + -0x18)) {
        **(int **)(unaff_EBP + -0x18) = -1;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
        iVar2 = FUN_00402e32(unaff_EBP + -0x60,&DAT_00980690);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xd28);
        piVar7 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar7 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar7 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x38) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x24),uVar1,
                           *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                           *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x38),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar2 = unaff_EBP + -0x60;
        goto LAB_007486d4;
      }
    }
    else if (-1 < *piVar7) {
      *piVar7 = -1;
      FUN_00403191(&DAT_00980690);
      piVar7 = *(int **)(unaff_EBP + -0x10);
      uVar1 = *(undefined4 *)(iVar2 + 0xd28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar7 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar7;
      *(int **)(unaff_EBP + -0x30) = piVar7;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),uVar1,*(undefined4 *)(unaff_EBP + -0x80)
                         ,*(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                         *(undefined4 *)(unaff_EBP + -0x74));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x30),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar2 = unaff_EBP + -0x80;
LAB_007486d4:
      iVar2 = FUN_00402bc3(iVar2);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
LAB_007486e5:
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    piVar7 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x2c) + 0xc);
    *(int **)(unaff_EBP + -0x18) = piVar7;
    *(int **)(unaff_EBP + -0x2c) = piVar8;
    if (7 < *(int *)(unaff_EBP + -0x1c)) {
      piVar7 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar2 = *(int *)(unaff_EBP + -0x20);
  } while( true );
}


