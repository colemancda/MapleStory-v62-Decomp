/* FUN_5000c0bf - 0x5000c0bf in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000c0bf(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  
  FUN_50012d80();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if ((puVar1[0xc] == 0) || (puVar1[0xd] == 0)) {
    uVar5 = 0x80004005;
  }
  else {
    *(undefined4 **)(unaff_EBP + -0x24) = puVar1 + 8;
    FUN_500024f7();
    iVar4 = puVar1[10];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == *(int *)(unaff_EBP + 0xc)) {
      piVar7 = puVar1 + 9;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        puVar1[8] = 0;
      }
    }
    else {
      uVar3 = ((puVar1[0xc] - 1) + *(int *)(unaff_EBP + 0xc)) / (uint)puVar1[0xc];
      uVar2 = puVar1[0xe];
      *(uint *)(unaff_EBP + -0x20) = uVar3;
      if (uVar3 < uVar2) {
        iVar4 = puVar1[0xf];
        iVar6 = 0;
        if (iVar4 + -1 != 0) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(int *)(unaff_EBP + -0x18) = iVar4 + -1;
          do {
            iVar6 = iVar6 + puVar1[0xe];
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + uVar3 * 4;
            *(int *)(unaff_EBP + -0x1c) = iVar6;
            if (uVar3 != 0) {
              *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
              iVar6 = iVar6 * 4;
              *(uint *)(unaff_EBP + -0x14) = uVar3;
              do {
                iVar4 = *(int *)(iVar6 + puVar1[0x10]);
                piVar7 = (int *)(*(int *)(unaff_EBP + -0x10) + puVar1[0x10]);
                iVar9 = *piVar7;
                *(int *)(unaff_EBP + -0x20) = iVar9;
                if (iVar9 != iVar4) {
                  *piVar7 = iVar4;
                  FUN_5000c6f9(piVar7);
                  piVar7 = *(int **)(unaff_EBP + -0x20);
                  if (piVar7 != (int *)0x0) {
                    (**(code **)(*piVar7 + 8))(piVar7);
                  }
                }
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
                iVar6 = iVar6 + 4;
                piVar7 = (int *)(unaff_EBP + -0x14);
                *piVar7 = *piVar7 + -1;
              } while (*piVar7 != 0);
              iVar6 = *(int *)(unaff_EBP + -0x1c);
            }
            piVar7 = (int *)(unaff_EBP + -0x18);
            *piVar7 = *piVar7 + -1;
          } while (*piVar7 != 0);
        }
        FUN_5000c753(puVar1 + 0x10,puVar1[0xf] * uVar3,0);
      }
      else if (uVar2 < uVar3) {
        FUN_5000c753(puVar1 + 0x10,puVar1[0xf] * uVar3,0);
        iVar4 = puVar1[0xf];
        iVar9 = puVar1[0xe] * iVar4;
        iVar6 = iVar4 * uVar3;
        if (iVar4 != 0) {
          *(int *)(unaff_EBP + -0x1c) = iVar4;
          do {
            iVar9 = iVar9 - puVar1[0xe];
            iVar4 = puVar1[0xf];
            iVar6 = iVar6 - uVar3;
            iVar8 = uVar3 - 1;
            *(int *)(unaff_EBP + -0x18) = iVar6;
            if (iVar8 != iVar4 + -1) {
              iVar4 = (iVar8 + iVar6) * 4;
              *(int *)(unaff_EBP + -0x10) = iVar4;
              while( true ) {
                _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                          ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + puVar1[0x10])
                           ,(IBinding *)0x0);
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -4;
                iVar8 = iVar8 + -1;
                if (iVar8 == puVar1[0xf] + -1) break;
                iVar4 = *(int *)(unaff_EBP + -0x10);
              }
              iVar6 = *(int *)(unaff_EBP + -0x18);
            }
            if (iVar8 != -1) {
              iVar4 = (iVar8 + iVar6) * 4;
              iVar6 = (iVar8 + iVar9) * 4;
              *(int *)(unaff_EBP + -0x14) = iVar4;
              *(int *)(unaff_EBP + -0x10) = iVar6;
              iVar8 = iVar8 + 1;
              while( true ) {
                _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                          ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + puVar1[0x10])
                           ,*(IBinding **)(iVar6 + puVar1[0x10]));
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -4;
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -4;
                iVar8 = iVar8 + -1;
                if (iVar8 == 0) break;
                iVar4 = *(int *)(unaff_EBP + -0x14);
                iVar6 = *(int *)(unaff_EBP + -0x10);
              }
              iVar6 = *(int *)(unaff_EBP + -0x18);
            }
            piVar7 = (int *)(unaff_EBP + -0x1c);
            *piVar7 = *piVar7 + -1;
            uVar3 = *(uint *)(unaff_EBP + -0x20);
          } while (*piVar7 != 0);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puVar1[0xe] = uVar3;
      piVar7 = puVar1 + 9;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        puVar1[8] = 0;
      }
      uVar2 = puVar1[10];
      puVar1[10] = *(undefined4 *)(unaff_EBP + 0xc);
      FUN_5000b444((int)puVar1);
      uVar3 = puVar1[10];
      uVar10 = uVar2;
      if (uVar3 <= uVar2) {
        uVar10 = uVar3;
      }
      uVar11 = 0xffffff;
      uVar5 = puVar1[0xb];
      *(undefined4 *)(unaff_EBP + 0xc) = *puVar1;
      iVar4 = abs(uVar2 - uVar3);
      (**(code **)(*(int *)(unaff_EBP + 0xc) + 0x8c))(puVar1,uVar10,0,iVar4,uVar5,uVar11);
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


