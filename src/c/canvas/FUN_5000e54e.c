/* FUN_5000e54e - 0x5000e54e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000e54e(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  
  FUN_50012d80();
  if ((0 < *(int *)(unaff_EBP + 0x14)) && (0 < *(int *)(unaff_EBP + 0x18))) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 0xc);
    iVar6 = *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + 0xc) + *(int *)(unaff_EBP + 0x14);
    *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar6 + 0x28);
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar6 + 0x2c);
    *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + 0x18);
    iVar1 = (*DAT_50081cf8)(unaff_EBP + -0x4c,unaff_EBP + -0x4c,unaff_EBP + -0x5c);
    if ((iVar1 != 0) && (iVar1 = FUN_5000b4b0(), iVar1 != 0)) {
      iVar1 = *(int *)(iVar6 + 0x34);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar6 + 0x30);
      *(int *)(unaff_EBP + -0x28) = iVar1;
      iVar6 = (*(int *)(unaff_EBP + -0x48) / iVar1) * iVar1;
      *(int *)(unaff_EBP + 0x18) = iVar6;
      if (iVar6 < *(int *)(unaff_EBP + -0x40)) {
        iVar8 = -iVar1;
        *(int *)(unaff_EBP + 0x10) = -iVar6;
        *(int *)(unaff_EBP + -0x2c) = iVar8;
        do {
          iVar7 = (*(int *)(unaff_EBP + -0x4c) / *(int *)(unaff_EBP + 0xc)) *
                  *(int *)(unaff_EBP + 0xc);
          if (iVar7 < *(int *)(unaff_EBP + -0x44)) {
            iVar8 = -iVar7;
            *(int *)(unaff_EBP + -0x1c) = iVar6 + iVar1;
            *(int *)(unaff_EBP + -0x18) = iVar8;
            *(int *)(unaff_EBP + -0x24) = -*(int *)(unaff_EBP + 0xc);
            while( true ) {
              iVar1 = *(int *)(unaff_EBP + 0xc) + iVar7;
              *(int *)(unaff_EBP + -0x20) = iVar1;
              *(int *)(unaff_EBP + -0x34) = iVar1;
              *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(int *)(unaff_EBP + -0x3c) = iVar7;
              *(int *)(unaff_EBP + -0x38) = iVar6;
              iVar6 = (*DAT_50081cf8)(unaff_EBP + -0x3c,unaff_EBP + -0x3c,unaff_EBP + -0x4c);
              if (iVar6 != 0) {
                (*DAT_50081ca4)(unaff_EBP + -0x3c,iVar8,*(undefined4 *)(unaff_EBP + 0x10));
                *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x3c);
                *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x38);
                *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x34);
                *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x30);
                FUN_5000b54d();
                *(undefined4 *)(unaff_EBP + -4) = 0;
                if (*(int **)(unaff_EBP + 0x14) == (int *)0x0) {
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                }
                else {
                  piVar2 = FUN_5000d372(*(int **)(unaff_EBP + 0x14));
                  if (*(int *)(unaff_EBP + 0x14) == 0) {
                    FUN_50012c97(0x80004003);
                  }
                  piVar3 = FUN_5000d34b(*(int **)(unaff_EBP + 0x14));
                  *(int **)(unaff_EBP + -0x14) = piVar3;
                  if (*(int *)(unaff_EBP + 0x14) == 0) {
                    FUN_50012c97(0x80004003);
                  }
                  pvVar4 = FUN_5000d3e7(*(void **)(unaff_EBP + 0x14),(void *)(unaff_EBP + -0x6c),
                                        unaff_EBP + -0x10);
                  iVar6 = *(int *)((int)pvVar4 + 8);
                  iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x6c));
                  if (iVar1 < 0) {
                    FUN_50012c97(iVar1);
                  }
                  if (iVar6 == 0) {
                    piVar2 = *(int **)(unaff_EBP + 0x14);
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  }
                  else {
                    bVar5 = (byte)piVar2;
                    iVar7 = 1 << (bVar5 & 0x1f);
                    iVar1 = *(int *)(unaff_EBP + -0x3c);
                    iVar8 = *(int *)(unaff_EBP + -0x38);
                    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) >> (bVar5 & 0x1f);
                    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) >> (bVar5 & 0x1f);
                    iVar1 = ((iVar7 - iVar1) + -1 + *(int *)(unaff_EBP + -0x34) >> (bVar5 & 0x1f)) +
                            *(int *)(unaff_EBP + -0x3c);
                    iVar8 = ((iVar7 - iVar8) + -1 + *(int *)(unaff_EBP + -0x30) >> (bVar5 & 0x1f)) +
                            *(int *)(unaff_EBP + -0x38);
                    *(int *)(unaff_EBP + -0x30) = iVar8;
                    *(int *)(unaff_EBP + -0x34) = iVar1;
                    FUN_50009b83(iVar1 - *(int *)(unaff_EBP + -0x3c),
                                 iVar8 - *(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x14),
                                 *(int *)(unaff_EBP + -0x10) * *(int *)(unaff_EBP + -0x38) + iVar6 +
                                 (*(int *)(unaff_EBP + -0x3c) <<
                                 (*(byte *)(unaff_EBP + -0x14) & 0x1f)),
                                 *(undefined4 *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0x1c));
                    if (*(int *)(unaff_EBP + 0x14) == 0) {
                      FUN_50012c97(0x80004003);
                    }
                    piVar2 = *(int **)(unaff_EBP + 0x14);
                    iVar6 = (**(code **)(*piVar2 + 0x20))(piVar2,unaff_EBP + -0x7c);
                    if (iVar6 < 0) {
                      FUN_50012ca5(iVar6,piVar2,&DAT_500183f8);
                    }
                    piVar2 = *(int **)(unaff_EBP + 0x14);
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  }
                  if (piVar2 != (int *)0x0) {
                    (**(code **)(*piVar2 + 8))(piVar2);
                  }
                }
              }
              iVar8 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x24);
              iVar7 = *(int *)(unaff_EBP + -0x20);
              *(int *)(unaff_EBP + -0x18) = iVar8;
              if (*(int *)(unaff_EBP + -0x44) <= iVar7) break;
              iVar6 = *(int *)(unaff_EBP + 0x18);
            }
            iVar1 = *(int *)(unaff_EBP + -0x28);
            iVar8 = *(int *)(unaff_EBP + -0x2c);
            iVar6 = *(int *)(unaff_EBP + 0x18);
          }
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar8;
          iVar6 = iVar6 + iVar1;
          *(int *)(unaff_EBP + 0x18) = iVar6;
        } while (iVar6 < *(int *)(unaff_EBP + -0x40));
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


