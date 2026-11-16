/* FUN_51002e1f - 0x51002e1f in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int FUN_51002e1f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int unaff_EBP;
  short *psVar8;
  
  FUN_51005950();
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = **(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  Ordinal_8(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_510050c3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + 0xc) & 6;
  do {
    if (*(int *)(unaff_EBP + -0x44) == 0) {
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      puVar3 = (undefined4 *)(iVar2 + 0x18);
      *(undefined4 **)(unaff_EBP + -0x48) = puVar3;
      FUN_510011e9();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piVar1 = (int *)FUN_51003f95((void *)(iVar2 + 0x34),(int *)(unaff_EBP + -0x10),
                                   (undefined4 *)0x0);
      if (piVar1 == (int *)0x0) {
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          piVar1 = (int *)(iVar2 + 0x1c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *puVar3 = 0;
          }
          goto LAB_51002ea8;
        }
        FUN_51002de7(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar6 = (*DAT_5100951c)();
        *(undefined4 *)(unaff_EBP + -0x88) = uVar6;
        FUN_51005405((void *)(unaff_EBP + -0x98),(short *)(unaff_EBP + -0x30));
        iVar7 = *(int *)(unaff_EBP + -0x1c);
        uVar5 = FUN_51003e84((void *)(iVar7 + 0x20),(short *)(unaff_EBP + -0x98));
        *(uint *)(unaff_EBP + 0xc) = uVar5;
        uVar5 = -(uint)(uVar5 != 0) & uVar5 - 0x10;
        puVar4 = FUN_51003fe4((void *)(iVar7 + 0x34),(int *)(unaff_EBP + -0x10),
                              (undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 **)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 0x14) = puVar4;
        *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x30);
        *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x2c);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x24);
        puVar4 = *(undefined4 **)(unaff_EBP + 0x14);
        *(undefined2 *)(unaff_EBP + -0x30) = 0;
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x80);
        puVar4[1] = *(undefined4 *)(unaff_EBP + -0x7c);
        puVar4[2] = *(undefined4 *)(unaff_EBP + -0x78);
        puVar4[3] = *(undefined4 *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar7 = FUN_51002df5((short *)(unaff_EBP + -0x98));
        if (iVar7 < 0) {
          FUN_5100581a(iVar7);
        }
      }
      else {
        if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
           (iVar7 = **(int **)(unaff_EBP + -0x10), iVar7 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar7 + -4) >> 1;
        }
        **(int **)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x34) + uVar5 * 2;
        uVar5 = -(uint)(*piVar1 != 0) & *piVar1 - 0x10U;
        psVar8 = (short *)(-(uint)(uVar5 != 0) & uVar5 + 0x10);
        uVar6 = (*DAT_5100951c)();
        *(undefined4 *)(psVar8 + 8) = uVar6;
        FUN_51003f23((void *)(*(int *)(unaff_EBP + -0x1c) + 0x20),*piVar1);
        FUN_51005405(*(void **)(unaff_EBP + 0x14),psVar8);
      }
      piVar1 = (int *)(iVar2 + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar3 = 0;
      }
LAB_5100331a:
      FUN_51005616((undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_51002df5((short *)(unaff_EBP + -0x30));
      goto LAB_510033dd;
    }
LAB_51002ea8:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_510041fb((int *)(unaff_EBP + -0x14));
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_51003df2((int *)(unaff_EBP + -0x14));
      FUN_51005616((undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_51002df5((short *)(unaff_EBP + -0x30));
      if (iVar2 < 0) {
        FUN_5100581a(iVar2);
      }
      iVar2 = -0x7fffbffd;
      goto LAB_510033e7;
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    if ((*(byte *)(unaff_EBP + 0xc) & 0x13) == 0) {
      Ordinal_8(unaff_EBP + -0x70);
    }
    else {
      *(undefined2 *)(unaff_EBP + -0x70) = 0x4003;
      *(int *)(unaff_EBP + -0x68) = unaff_EBP + -0x3c;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_51003df2((int *)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (*(undefined4 **)(unaff_EBP + -0x10) == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined4 **)(unaff_EBP + -0x10);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_5100581a(0x80004003);
    }
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x10))
                      (*(int **)(unaff_EBP + -0x14),uVar6,*(undefined4 *)(unaff_EBP + -0x70),
                       *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       *(undefined4 *)(unaff_EBP + -100),unaff_EBP + -0x18);
    if (iVar2 < 0) {
      FUN_51003df2((int *)(unaff_EBP + -0x18));
      FUN_51003df2((int *)(unaff_EBP + -0x14));
      FUN_51005616((undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = FUN_51002df5((short *)(unaff_EBP + -0x30));
LAB_51003378:
      if (iVar7 < 0) {
        FUN_5100581a(iVar7);
      }
      goto LAB_510033e7;
    }
    if (iVar2 == 1) {
      iVar2 = *(int *)(unaff_EBP + -0x3c);
      **(int **)(unaff_EBP + 8) = **(int **)(unaff_EBP + 8) + iVar2 * 2;
      FUN_51004e21(*(undefined4 *)(unaff_EBP + -0x34),iVar2 + -1);
      FUN_5100511b();
      FUN_51005176((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + -0x40));
      FUN_51005616((undefined4 *)(unaff_EBP + -0x40));
      if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        puVar3 = (undefined4 *)(iVar2 + 0x18);
        *(undefined4 **)(unaff_EBP + -0x48) = puVar3;
        FUN_510011e9();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        piVar1 = (int *)FUN_51003f95((void *)(iVar2 + 0x34),(int *)(unaff_EBP + -0x10),
                                     (undefined4 *)0x0);
        if (piVar1 != (int *)0x0) {
          uVar5 = -(uint)(*piVar1 != 0) & *piVar1 - 0x10U;
          psVar8 = (short *)(-(uint)(uVar5 != 0) & uVar5 + 0x10);
          uVar6 = (*DAT_5100951c)();
          *(undefined4 *)(psVar8 + 8) = uVar6;
          FUN_51003f23((void *)(*(int *)(unaff_EBP + -0x1c) + 0x20),*piVar1);
          iVar7 = FUN_51005067(*(short **)(unaff_EBP + 0x14),psVar8);
          if (iVar7 < 0) {
            FUN_5100581a(iVar7);
          }
          piVar1 = (int *)(iVar2 + 0x1c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *puVar3 = 0;
          }
          piVar1 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          piVar1 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          goto LAB_5100331a;
        }
        piVar1 = (int *)(iVar2 + 0x1c);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iVar2 == 0) {
          *puVar3 = 0;
        }
      }
    }
    else {
      if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
         (iVar2 = **(int **)(unaff_EBP + -0x10), iVar2 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar2 + -4) >> 1;
      }
      **(int **)(unaff_EBP + 8) = **(int **)(unaff_EBP + 8) + uVar5 * 2;
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_5100581a(0x80004003);
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 0x10);
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0xc))
                      (*(int **)(unaff_EBP + -0x18),*puVar3,puVar3[1],puVar3[2],puVar3[3],
                       unaff_EBP + -0x30);
    if (iVar2 < 0) {
      piVar1 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        FUN_510052d4(*(int **)(unaff_EBP + -0x10));
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = FUN_51002df5((short *)(unaff_EBP + -0x30));
      goto LAB_51003378;
    }
    if ((*(byte *)(unaff_EBP + 0xc) & 4) == 0) {
      iVar2 = FUN_51005534();
      *(int *)(unaff_EBP + -0x4c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (((iVar2 != 0) &&
          (iVar2 = FUN_51004828((void *)(unaff_EBP + -0x20),(int *)(unaff_EBP + -0x4c)), iVar2 < 0))
         && (iVar2 != -0x7fffbffe)) {
        FUN_5100581a(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        Ordinal_8(unaff_EBP + -0x60);
        iVar2 = FUN_51005067((short *)(unaff_EBP + -0x60),(short *)&DAT_51009858);
        if (iVar2 < 0) {
          FUN_5100581a(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puVar3 = (undefined4 *)
                 FUN_51005761(*(void **)(unaff_EBP + -0x1c),(undefined4 *)(unaff_EBP + -0x50),
                              *(undefined4 *)(unaff_EBP + -0x20),(undefined4 *)(unaff_EBP + -0x60));
        FUN_510053e3((void *)(unaff_EBP + -0xa8),(int *)*puVar3,'\x01');
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar2 = FUN_51005067((short *)(unaff_EBP + -0x30),(short *)(unaff_EBP + -0xa8));
        if (iVar2 < 0) {
          FUN_5100581a(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iVar2 = FUN_51002df5((short *)(unaff_EBP + -0xa8));
        if (iVar2 < 0) {
          FUN_5100581a(iVar2);
        }
        piVar1 = *(int **)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar2 = FUN_51002df5((short *)(unaff_EBP + -0x60));
        if (iVar2 < 0) {
          FUN_5100581a(iVar2);
        }
      }
      piVar1 = *(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piVar1 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x2c);
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x24);
      puVar3 = *(undefined4 **)(unaff_EBP + 0x14);
      *puVar3 = *(undefined4 *)(unaff_EBP + -0x80);
      puVar3[1] = *(undefined4 *)(unaff_EBP + -0x7c);
      puVar3[2] = *(undefined4 *)(unaff_EBP + -0x78);
      *(undefined2 *)(unaff_EBP + -0x30) = 0;
      puVar3[3] = *(undefined4 *)(unaff_EBP + -0x74);
      if (piVar1 != (int *)0x0) {
        FUN_510052d4(piVar1);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_51002df5((short *)(unaff_EBP + -0x30));
LAB_510033dd:
      if (iVar2 < 0) {
        FUN_5100581a(iVar2);
      }
      iVar2 = 0;
LAB_510033e7:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar2;
    }
    piVar1 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x38) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  } while( true );
}


