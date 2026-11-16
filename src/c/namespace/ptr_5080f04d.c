/* ptr_5080f04d - 0x5080f04d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_5080f04d(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  if ((*(int *)(unaff_EBP + 0x10) == 0) ||
     (iVar6 = *(int *)(unaff_EBP + 8), *(int *)(iVar6 + 0x14) == 0)) {
    uVar5 = 0x80004003;
  }
  else {
    psVar7 = *(short **)(unaff_EBP + 0xc);
    if ((psVar7 == (short *)0x0) || (sVar2 = *psVar7, sVar2 == 0)) {
LAB_5080f0ee:
      uVar5 = 0x80070057;
    }
    else {
      do {
        if ((sVar2 == 0x2f) || (sVar2 == 0x5c)) goto LAB_5080f0ee;
        sVar2 = psVar7[1];
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_50803d00();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puVar1 = (undefined4 *)(iVar6 + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar1;
      *(undefined4 **)(unaff_EBP + -0x24) = puVar1;
      FUN_508012a1();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(void **)(unaff_EBP + -0x2c) = (void *)(iVar6 + 0x20);
      iVar3 = FUN_5080febc((void *)(iVar6 + 0x20),(int *)(unaff_EBP + -0x18),
                           (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0);
      if (iVar3 == 0) {
        piVar4 = FUN_50801ba4();
        FUN_50803d5b((void *)(unaff_EBP + -0x14),piVar4);
        FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
        piVar4 = (int *)(iVar6 + -0x14);
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar3 == 0) {
          *puVar1 = 0;
        }
        FUN_508050d0();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_5080bac1();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piVar4 = FUN_5080d23a();
        FUN_50803c5f((void *)(unaff_EBP + 8),piVar4);
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x20));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x24));
        FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        puVar1 = *(undefined4 **)(iVar6 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
        FUN_508012a1();
        iVar3 = *(int *)(iVar6 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar3 = FUN_5080fd86((void *)(iVar3 + 8),(int *)(unaff_EBP + 8),(undefined4 *)0x0);
        if (iVar3 == 0) {
          iVar3 = FUN_5081013c((void *)(unaff_EBP + -0x1c));
          *(int *)(unaff_EBP + 0xc) = iVar3;
          *(int *)(unaff_EBP + -0x20) = iVar3 + 0x4c;
          FUN_5080fcd1(iVar6 + 0x10);
          FUN_5080fcee(*(int *)(unaff_EBP + -0x20));
          *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 4) = *(undefined4 *)(iVar6 + 0x14);
          piVar4 = FUN_5080504c();
          FUN_50803c5f((void *)(unaff_EBP + -0x20),piVar4);
          FUN_50803d5b((void *)(*(int *)(unaff_EBP + 0xc) + 0x34),(int *)(unaff_EBP + -0x20));
          FUN_508052b4((undefined4 *)(unaff_EBP + -0x20));
          FUN_508052b4((undefined4 *)(unaff_EBP + -0x24));
          FUN_50803d5b((void *)(*(int *)(unaff_EBP + 0xc) + 0x54),(int *)(unaff_EBP + 8));
          FUN_50803d5b((void *)(*(int *)(unaff_EBP + 0xc) + 0x58),(int *)(iVar6 + 0x18));
          if (*(int **)(unaff_EBP + 8) == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_5080d29f(*(int **)(unaff_EBP + 8));
          }
          iVar3 = (*DAT_5081e6a4)(iVar3,0);
          if (iVar3 == 0) {
            iVar6 = (*DAT_5081e704)();
            if (iVar6 == 0xb7) {
              piVar4 = puVar1 + 1;
              *piVar4 = *piVar4 + -1;
              if (*piVar4 == 0) {
                *puVar1 = 0;
              }
              uVar5 = 0x80030050;
            }
            else {
              piVar4 = puVar1 + 1;
              *piVar4 = *piVar4 + -1;
              if (*piVar4 == 0) {
                *puVar1 = 0;
              }
              uVar5 = 0x80070005;
            }
            FUN_5080fc91((int *)(unaff_EBP + -0x1c));
            FUN_508052b4((undefined4 *)(unaff_EBP + 8));
            FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
            FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
          }
          else {
            FUN_5080fdd5((void *)(*(int *)(iVar6 + 0x14) + 8),(int *)(unaff_EBP + 8),
                         (undefined4 *)(unaff_EBP + 0xc));
            piVar4 = puVar1 + 1;
            *piVar4 = *piVar4 + -1;
            iVar6 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (iVar6 == 0) {
              *puVar1 = 0;
            }
            puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
            *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
            FUN_508012a1();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_5080ff0e();
            piVar4 = puVar1 + 1;
            *piVar4 = *piVar4 + -1;
            if (*piVar4 == 0) {
              *puVar1 = 0;
            }
            **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + 8));
              *(undefined4 *)(unaff_EBP + 8) = 0;
            }
            if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + -0x14));
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
            if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + -0x18));
            }
            uVar5 = 0;
          }
          goto LAB_5080f361;
        }
        piVar4 = puVar1 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *puVar1 = 0;
        }
        FUN_5080fc91((int *)(unaff_EBP + -0x1c));
        FUN_508052b4((undefined4 *)(unaff_EBP + 8));
      }
      else {
        piVar4 = (int *)(iVar6 + -0x14);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *puVar1 = 0;
        }
      }
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
      uVar5 = 0x80030050;
    }
  }
LAB_5080f361:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar5;
}


