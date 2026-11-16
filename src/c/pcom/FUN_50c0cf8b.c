/* FUN_50c0cf8b - 0x50c0cf8b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0cf8b(void)

{
  undefined4 *puVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffbc;
  if (*(undefined2 **)(unaff_EBP + 0x10) == (undefined2 *)0x0) {
    iVar4 = -0x7fffbffd;
    goto LAB_50c0d02d;
  }
  psVar5 = *(short **)(unaff_EBP + 0xc);
  **(undefined2 **)(unaff_EBP + 0x10) = 0;
  if ((psVar5 != (short *)0x0) && (sVar3 = *psVar5, sVar3 != 0)) {
    do {
      if (sVar3 == 0x2f) break;
      sVar3 = psVar5[1];
      psVar5 = psVar5 + 1;
    } while (sVar3 != 0);
    sVar3 = *psVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (sVar3 != 0) {
      FUN_50c02a35(*(undefined4 *)(unaff_EBP + 0xc),(int)psVar5 - *(int *)(unaff_EBP + 0xc) >> 1);
      FUN_50c05e8d();
      Ordinal_8(unaff_EBP + -0x34);
      iVar4 = *(int *)(unaff_EBP + 8);
      puVar1 = (undefined4 *)(iVar4 + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
      FUN_50c026fc();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(unaff_EBP + -0x1c);
      }
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      iVar7 = FUN_50c0dcc3((void *)(iVar4 + 0x24),(undefined4 *)(unaff_EBP + 8),(void *)0x0);
      if (iVar7 == 0) {
        piVar9 = (int *)(iVar4 + 0x20);
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
          *puVar1 = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x34));
        if (iVar4 < 0) {
          FUN_50c101c4(iVar4);
        }
        iVar4 = 1;
      }
      else {
        psVar8 = (short *)FUN_50c0ab6e(*(int *)(iVar7 + 4) + 8);
        FUN_50c0edae((void *)(unaff_EBP + -0x34),psVar8);
        piVar9 = (int *)(iVar4 + 0x20);
        *piVar9 = *piVar9 + -1;
        iVar4 = *piVar9;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar4 == 0) {
          *puVar1 = 0;
        }
        iVar4 = FUN_50c08394((ushort *)(unaff_EBP + -0x34),(ushort *)(unaff_EBP + -0x34),0,0xd);
        if ((iVar4 < 0) || (*(int *)(unaff_EBP + -0x2c) == 0)) {
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x34));
          if (iVar4 < 0) {
            FUN_50c101c4(iVar4);
          }
          iVar4 = -0x7ff8ffa9;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          iVar4 = FUN_50c0e9c2((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x2c));
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            FUN_50c101c4(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          bVar2 = FUN_50c0537e((void *)(unaff_EBP + -0x14),0);
          if (bVar2) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            if (((*(int *)(unaff_EBP + -0x2c) != 0) &&
                (iVar4 = FUN_50c0ea22((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x2c)),
                iVar4 < 0)) && (iVar4 != -0x7fffbffe)) {
              FUN_50c101c4(iVar4);
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            bVar2 = FUN_50c0537e((void *)(unaff_EBP + -0x18),0);
            if (!bVar2) {
              *(undefined2 *)(unaff_EBP + -0x44) = 8;
              piVar9 = FUN_50c05fda(psVar5 + 1);
              *(int **)(unaff_EBP + -0x3c) = piVar9;
              if (piVar9 == (int *)0x0) {
                FUN_50c0dc70((int *)(unaff_EBP + -0x18));
                FUN_50c0dc70((int *)(unaff_EBP + -0x14));
                *(undefined1 *)(unaff_EBP + -4) = 2;
                iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x34));
                if (iVar4 < 0) {
                  FUN_50c101c4(iVar4);
                }
                FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
                iVar4 = -0x7ff8fff2;
              }
              else {
                if (*(int *)(unaff_EBP + -0x18) == 0) {
                  FUN_50c101c4(0x80004003);
                }
                iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0xc))
                                  (*(int **)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x44),
                                   *(undefined4 *)(unaff_EBP + -0x40),
                                   *(undefined4 *)(unaff_EBP + -0x3c),
                                   *(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + 0x10));
                FUN_50c08269((short *)(unaff_EBP + -0x44));
                piVar9 = *(int **)(unaff_EBP + -0x18);
                *(undefined1 *)(unaff_EBP + -4) = 5;
                if (piVar9 != (int *)0x0) {
                  (**(code **)(*piVar9 + 8))(piVar9);
                }
                piVar9 = *(int **)(unaff_EBP + -0x14);
                *(undefined1 *)(unaff_EBP + -4) = 3;
                if (piVar9 != (int *)0x0) {
                  (**(code **)(*piVar9 + 8))(piVar9);
                }
                *(undefined1 *)(unaff_EBP + -4) = 2;
                iVar7 = FUN_50c08269((short *)(unaff_EBP + -0x34));
                if (iVar7 < 0) {
                  FUN_50c101c4(iVar7);
                }
                if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
                  FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
                }
              }
              goto LAB_50c0d02d;
            }
            piVar9 = *(int **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 8))(piVar9);
            }
            piVar9 = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 8))(piVar9);
            }
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x34));
            if (iVar4 < 0) {
              FUN_50c101c4(iVar4);
            }
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
            }
            goto LAB_50c0d02a;
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_50c101c4(0x80004003);
          }
          iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x14))
                            (*(int **)(unaff_EBP + -0x14),psVar5 + 1,
                             *(undefined4 *)(unaff_EBP + 0x10));
          FUN_50c0dc70((int *)(unaff_EBP + -0x14));
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar7 = FUN_50c08269((short *)(unaff_EBP + -0x34));
          if (iVar7 < 0) {
            FUN_50c101c4(iVar7);
          }
        }
      }
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
      goto LAB_50c0d02d;
    }
    iVar7 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar7 + 0x1c);
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_50c026fc();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_50c0dcc3((void *)(iVar7 + 0x24),(undefined4 *)(unaff_EBP + 0xc),(void *)0x0);
    if (iVar4 != 0) {
      psVar5 = (short *)FUN_50c0ab6e(*(int *)(iVar4 + 4) + 8);
      iVar4 = FUN_50c09a25(*(short **)(unaff_EBP + 0x10),psVar5);
      piVar9 = (int *)(iVar7 + 0x20);
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        *puVar1 = 0;
      }
      goto LAB_50c0d02d;
    }
    piVar9 = (int *)(iVar7 + 0x20);
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      *puVar1 = 0;
    }
  }
LAB_50c0d02a:
  iVar4 = 1;
LAB_50c0d02d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


