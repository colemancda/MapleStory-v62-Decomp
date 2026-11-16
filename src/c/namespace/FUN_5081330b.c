/* FUN_5081330b - 0x5081330b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5081330b(void)

{
  void *this;
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  short *psVar11;
  byte *pbVar12;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    uVar2 = 0x80004003;
  }
  else {
    psVar11 = *(short **)(unaff_EBP + 0xc);
    if ((psVar11 != (short *)0x0) && (sVar1 = *psVar11, sVar1 != 0)) {
      do {
        if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) goto LAB_508133e3;
        sVar1 = psVar11[1];
        psVar11 = psVar11 + 1;
      } while (sVar1 != 0);
      iVar4 = *(int *)(unaff_EBP + 8);
      iVar3 = *(int *)(iVar4 + 0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        FUN_50813070();
      }
      Ordinal_8(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_50804f37((void *)(unaff_EBP + -0x3c),0xd,(ushort *)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      if (((*(int *)(unaff_EBP + -0x34) != 0) &&
          (iVar3 = FUN_50810dce((void *)(unaff_EBP + 0x20),(int *)(unaff_EBP + -0x34)), iVar3 < 0))
         && (iVar3 != -0x7fffbffe)) {
        FUN_5080dfed(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 0x20) != 0) {
        puVar6 = *(undefined4 **)(iVar4 + 0x14);
        *(undefined4 **)(unaff_EBP + -0x20) = puVar6;
        FUN_508012a1();
        this = *(void **)(iVar4 + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar5 = FUN_50813027(this,*(wchar_t **)(unaff_EBP + 0xc));
        if (uVar5 == 0) {
          iVar3 = FUN_50813d2b(*(void **)(*(int *)(iVar4 + 0x1c) + 0x14));
          FUN_50813c79(iVar3);
          *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x40);
          FUN_508050d0();
          FUN_50803d5b((void *)(*(int *)(iVar3 + 4) + 0xc),(int *)(unaff_EBP + 0xc));
          FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
          *(undefined4 *)(*(int *)(iVar3 + 4) + 0x18) = *(undefined4 *)(iVar4 + 0x1c);
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          while( true ) {
            *(undefined4 *)(unaff_EBP + 0xc) = 0;
            if (*(int *)(unaff_EBP + 0x20) == 0) {
              FUN_5080dfed(0x80004003);
            }
            piVar8 = *(int **)(unaff_EBP + 0x20);
            puVar6 = FUN_5080fc68((int *)(unaff_EBP + -0x18));
            iVar7 = (**(code **)(*piVar8 + 0x10))(piVar8,puVar6,0x10000,unaff_EBP + 0xc);
            if (iVar7 < 0) {
              FUN_5080dffb(iVar7,piVar8,&DAT_5081e4f0);
            }
            if (*(int *)(unaff_EBP + 0xc) == 0) break;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 0xc);
            pbVar9 = (byte *)FUN_5080fc68((int *)(unaff_EBP + -0x18));
            pbVar12 = pbVar9 + *(int *)(unaff_EBP + 0xc);
            for (; pbVar9 < pbVar12; pbVar9 = pbVar9 + 1) {
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + (uint)*pbVar9;
            }
            puVar6 = FUN_5080fc68((int *)(unaff_EBP + -0x18));
            iVar7 = *(int *)(unaff_EBP + 0xc);
            iVar10 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x14) + 8) + 0x18))(puVar6,iVar7);
            if (iVar7 != iVar10) {
              *(undefined4 *)(unaff_EBP + -0x24) = 0x26;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_5081ae30);
            }
          }
          for (piVar8 = *(int **)(iVar3 + 4); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[6]) {
            *piVar8 = *piVar8 + *(int *)(unaff_EBP + -0x14);
            piVar8[7] = piVar8[7] + *(int *)(unaff_EBP + -0x1c);
          }
          piVar8 = (int *)(*(int *)(iVar4 + 0x14) + 0x40);
          *piVar8 = *piVar8 + *(int *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_5080fbb9((int *)(unaff_EBP + -0x18));
          puVar6 = *(undefined4 **)(unaff_EBP + -0x20);
          piVar8 = puVar6 + 1;
          *piVar8 = *piVar8 + -1;
          iVar4 = *piVar8;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          if (iVar4 == 0) {
            *puVar6 = 0;
          }
          piVar8 = *(int **)(unaff_EBP + 0x20);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 8))(piVar8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
          if (iVar4 < 0) {
            FUN_5080dfed(iVar4);
          }
          uVar2 = 0;
        }
        else {
          piVar8 = puVar6 + 1;
          *piVar8 = *piVar8 + -1;
          if (*piVar8 == 0) {
            *puVar6 = 0;
          }
          FUN_50811f51((int *)(unaff_EBP + 0x20));
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
          if (iVar4 < 0) {
            FUN_5080dfed(iVar4);
          }
          uVar2 = 0x80030050;
        }
        goto LAB_508133e8;
      }
      FUN_50811f51((int *)(unaff_EBP + 0x20));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
      if (iVar4 < 0) {
        FUN_5080dfed(iVar4);
      }
    }
LAB_508133e3:
    uVar2 = 0x80070057;
  }
LAB_508133e8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


