/* FUN_51003740 - 0x51003740 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51003740(void)

{
  short *psVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff80;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51004285(&DAT_5100920c,(_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               0);
  psVar1 = *(short **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff7c;
  FUN_510050c3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_51003dff((int *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5100569c();
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_5100581a(0x80004003);
  }
  FUN_510056ed(*(void **)(unaff_EBP + -0x14),unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if ((*(int **)(unaff_EBP + -0x18) == (int *)0x0) ||
     (iVar5 = **(int **)(unaff_EBP + -0x18), iVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar5 + -4) >> 1;
  }
  if (uVar4 == 0) {
    if ((*(short *)(unaff_EBP + 0x10) == 0) || (*(short *)(unaff_EBP + 0x10) == 10)) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x10);
    }
    else {
      Ordinal_8();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_51005424((void *)(unaff_EBP + -0x40),3,(ushort *)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
      if (iVar5 < 0) {
        FUN_5100581a(iVar5);
      }
    }
    Ordinal_8();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(short **)(unaff_EBP + -0x20) = psVar1;
    if ((psVar1 != (short *)0x0) && ((*psVar1 == 0x2f || (*psVar1 == 0x5c)))) {
      *(short **)(unaff_EBP + -0x20) = psVar1 + 1;
    }
    iVar5 = FUN_51002e1f();
    if (iVar5 < 0) {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
LAB_51003881:
      if (iVar5 < 0) {
        FUN_5100581a(iVar5);
      }
    }
    else {
      FUN_510033f8();
      FUN_5100349b();
      if (**(short **)(unaff_EBP + -0x20) == 0) {
LAB_51003c1a:
        *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x4c);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x48);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x44);
        puVar2 = *(undefined4 **)(unaff_EBP + 0x30);
        *puVar2 = *(undefined4 *)(unaff_EBP + -0x80);
        puVar2[1] = *(undefined4 *)(unaff_EBP + -0x7c);
        puVar2[2] = *(undefined4 *)(unaff_EBP + -0x78);
        *(undefined2 *)(unaff_EBP + -0x50) = 0;
        puVar2[3] = *(undefined4 *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
        if (iVar5 < 0) {
          FUN_5100581a(iVar5);
        }
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          FUN_510052d4(*(int **)(unaff_EBP + -0x18));
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        FUN_51003ca6();
        return;
      }
      Ordinal_8();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_51004e5e((ushort *)(unaff_EBP + -0x40),(ushort *)(unaff_EBP + -0x50),0,0xd);
      if (iVar5 < 0) {
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
        if (iVar5 < 0) {
          FUN_5100581a(iVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
        if (iVar5 < 0) {
          FUN_5100581a(iVar5);
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        if (((*(int *)(unaff_EBP + -0x38) != 0) &&
            (iVar5 = FUN_51004888((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + -0x38)), iVar5 < 0))
           && (iVar5 != -0x7fffbffe)) {
          FUN_5100581a(iVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        bVar3 = FUN_51003e15((void *)(unaff_EBP + 0xc),0);
        if (bVar3) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (((*(int *)(unaff_EBP + -0x38) != 0) &&
              (iVar5 = FUN_51004948((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x38)),
              iVar5 < 0)) && (iVar5 != -0x7fffbffe)) {
            FUN_5100581a(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          bVar3 = FUN_51003e15((void *)(unaff_EBP + -0x1c),0);
          if (bVar3) {
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
            if (iVar5 < 0) {
              FUN_5100581a(iVar5);
            }
            goto LAB_51003c1a;
          }
          FUN_510053b4((void *)(unaff_EBP + -0x60),*(wchar_t **)(unaff_EBP + -0x20));
          *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x5c);
          *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x54);
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            FUN_5100581a(0x80004003);
          }
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                    (*(int **)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x80),
                     *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                     *(undefined4 *)(unaff_EBP + -0x74));
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x60));
          if (iVar5 < 0) {
            FUN_5100581a(iVar5);
          }
          FUN_51003df2((int *)(unaff_EBP + -0x1c));
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
          if (iVar5 < 0) {
            FUN_5100581a(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
          if (iVar5 < 0) {
            FUN_5100581a(iVar5);
          }
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            FUN_510052d4(*(int **)(unaff_EBP + -0x18));
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
          }
          goto LAB_51003bd9;
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_5100581a(0x80004003);
        }
        psVar1 = *(short **)(unaff_EBP + 0x30);
        iVar5 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x14))
                          (*(int **)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x20));
        if (iVar5 < 0) {
          FUN_51005455((void *)(unaff_EBP + -0x70),iVar5,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x70),(ThrowInfo *)&DAT_51007720);
        }
        if ((*(byte *)(unaff_EBP + -0x24) & 0x10) != 0) {
          iVar5 = FUN_51005534();
          *(undefined4 *)(unaff_EBP + 0x30) = 0;
          *(int *)(unaff_EBP + -0x24) = iVar5;
          if (((iVar5 != 0) &&
              (iVar5 = FUN_510048e8((void *)(unaff_EBP + 0x30),(int *)(unaff_EBP + -0x24)),
              iVar5 < 0)) && (iVar5 != -0x7fffbffe)) {
            FUN_5100581a(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          bVar3 = FUN_51003e15((void *)(unaff_EBP + 0x30),0);
          if (!bVar3) {
            FUN_51002df5(psVar1);
            if (*(int *)(unaff_EBP + 0x30) == 0) {
              FUN_5100581a(0x80004003);
            }
            piVar6 = (int *)FUN_51005727(*(void **)(unaff_EBP + 0x30),unaff_EBP + -0x28);
            puVar2 = (undefined4 *)*piVar6;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (puVar2 == (undefined4 *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *puVar2;
            }
            (**(code **)(**(int **)(unaff_EBP + 8) + 0x1c))
                      (*(int **)(unaff_EBP + 8),uVar7,*(undefined4 *)(unaff_EBP + 0x10),
                       *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                       *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                       *(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + 0x28),
                       *(undefined4 *)(unaff_EBP + 0x2c));
            FUN_51005616((undefined4 *)(unaff_EBP + -0x28));
            FUN_51003df2((int *)(unaff_EBP + 0x30));
            FUN_51003df2((int *)(unaff_EBP + 0xc));
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
            if (iVar5 < 0) {
              FUN_5100581a(iVar5);
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
            goto LAB_51003881;
          }
          FUN_51003df2((int *)(unaff_EBP + 0x30));
        }
        FUN_51003df2((int *)(unaff_EBP + 0xc));
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x40));
        if (iVar5 < 0) {
          FUN_5100581a(iVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar5 = FUN_51002df5((short *)(unaff_EBP + -0x50));
        if (iVar5 < 0) {
          FUN_5100581a(iVar5);
        }
      }
    }
  }
  FUN_51005616((undefined4 *)(unaff_EBP + -0x18));
  FUN_51003df2((int *)(unaff_EBP + -0x14));
LAB_51003bd9:
  FUN_51003ca6();
  return;
}


