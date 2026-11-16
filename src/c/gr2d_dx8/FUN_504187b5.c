/* FUN_504187b5 - 0x504187b5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504187b5(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  void *this;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  
  FUN_5042a430();
  uVar8 = *(int *)(unaff_EBP + 8) + *(int *)((int)this + 0x1034);
  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x1040);
  iVar6 = *(int *)((int)this + 0x10c0);
  *(uint *)(unaff_EBP + 8) = uVar8;
  if (iVar6 == 0) {
    puVar2 = (undefined4 *)FUN_504018ba();
    *(undefined4 **)((int)this + 0x10c0) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_50418b9e;
    for (iVar6 = (*(int *)((int)this + 0x10a8) * *(int *)((int)this + 0x10ac) & 0x1fffffffU) << 1;
        iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  puVar10 = (uint *)(*(int *)((int)this + 0x10c0) +
                    ((*(int *)(unaff_EBP + 0xc) - *(int *)((int)this + 0x109c)) *
                     *(int *)((int)this + 0x10a8) + (uVar8 - *(int *)((int)this + 0x1090) >> 2)) * 8
                    );
  uVar5 = puVar10[1];
  *(uint **)(unaff_EBP + -0x10) = puVar10;
  if (uVar5 == 0) {
    *(int *)(unaff_EBP + -0x18) = *(int *)((int)this + 0x10a4) << 4;
    pvVar3 = (void *)FUN_504018ba();
    *(void **)(unaff_EBP + -0x14) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      _vector_constructor_iterator_(pvVar3,0x10,*(int *)(unaff_EBP + -0x18),ptr_50410e40);
      uVar5 = *(uint *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puVar10[1] = uVar5;
    if (uVar5 == 0) goto LAB_50418b9e;
    *puVar10 = 0;
    *(int *)((int)this + 0x10bc) = *(int *)((int)this + 0x10bc) + 1;
  }
  if (*puVar10 == 0) {
    uVar5 = 4;
    if (3 < *(uint *)((int)this + 0x103c)) {
      uVar5 = *(uint *)((int)this + 0x103c);
    }
    if (((uVar8 & 3) < *(uint *)((int)this + 0x1034)) || (uVar5 < (uVar8 & 3) + 4)) {
      uVar5 = *(uint *)((int)this + 0x108c);
      iVar6 = (uVar8 >> 2) * *(int *)((int)this + 0x1050) +
              (uVar5 >> 2) * *(int *)((int)this + 0x1080) +
              *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x18);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
      *(uint *)(unaff_EBP + -0x18) = uVar5;
      while (uVar5 < *(uint *)((int)this + 0x1094)) {
        (**(code **)((int)this + 0x1084))(*(undefined4 *)(unaff_EBP + -0x14),iVar6);
        iVar6 = iVar6 + *(int *)((int)this + 0x1080);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x100;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        uVar5 = *(uint *)(unaff_EBP + -0x18);
      }
      puVar10 = *(uint **)(unaff_EBP + -0x10);
    }
    else {
      uVar5 = *(uint *)((int)this + 0x1038);
      *(undefined4 *)(unaff_EBP + -0x18) = 4;
      if (3 < uVar5) {
        *(uint *)(unaff_EBP + -0x18) = uVar5;
      }
      if (*(uint *)((int)this + 0x108c) < *(uint *)((int)this + 0x1030)) {
        (**(code **)((int)this + 0x1084))
                  (puVar10[1],
                   (*(uint *)((int)this + 0x108c) >> 2) * *(int *)((int)this + 0x1080) +
                   (uVar8 >> 2) * *(int *)((int)this + 0x1050) +
                   *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) +
                   *(int *)((int)this + 0x18));
      }
      if (*(uint *)(unaff_EBP + -0x18) < *(uint *)((int)this + 0x1094)) {
        (**(code **)((int)this + 0x1084))
                  (puVar10[1],
                   (*(uint *)((int)this + 0x1094) - 4 >> 2) * *(int *)((int)this + 0x1080) +
                   (uVar8 >> 2) * *(int *)((int)this + 0x1050) +
                   *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) +
                   *(int *)((int)this + 0x18));
      }
    }
  }
  if (*(int *)((int)this + 0x1048) != 0) {
    uVar4 = FUN_5041841d(this,*(int *)(unaff_EBP + 0x10));
    *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
  }
  uVar5 = *(int *)((int)this + 0x1030) - *(int *)((int)this + 0x108c);
  iVar6 = *(int *)((int)this + 0x1090);
  uVar7 = *(int *)((int)this + 0x1058) + uVar5;
  if (uVar5 < uVar7) {
    do {
      puVar9 = (undefined4 *)
               (((uVar5 & 0xfffffffc | uVar8 - iVar6 & 3) << 2 | uVar5 & 3) * 0x10 +
               *(int *)(*(int *)(unaff_EBP + -0x10) + 4));
      puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
      *puVar9 = *puVar2;
      puVar9[1] = puVar2[1];
      puVar9[2] = puVar2[2];
      uVar5 = uVar5 + 1;
      puVar9[3] = puVar2[3];
    } while (uVar5 < uVar7);
    uVar8 = *(uint *)(unaff_EBP + 8);
    puVar10 = *(uint **)(unaff_EBP + -0x10);
  }
  uVar5 = uVar8 - *(int *)((int)this + 0x1090) & 3;
  if (*(int *)((int)this + 0x1074) == 0) {
    *puVar10 = *puVar10 | 1 << (sbyte)uVar5;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    do {
      if ((*(uint *)((int)this + 0x107c) & *(uint *)(unaff_EBP + 0x10)) == uVar5) {
        *puVar10 = *puVar10 | 1 << ((byte)*(undefined4 *)(unaff_EBP + 0x10) & 0x1f);
      }
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    } while (*(uint *)(unaff_EBP + 0x10) < 4);
  }
  if (*puVar10 == 0xf) {
    uVar5 = *(uint *)((int)this + 0x108c);
    iVar6 = (uVar8 >> 2) * *(int *)((int)this + 0x1050) +
            (uVar5 >> 2) * *(int *)((int)this + 0x1080) +
            *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x18);
    *(uint *)(unaff_EBP + 0xc) = puVar10[1];
    *(uint *)(unaff_EBP + -0x18) = uVar5;
    while (uVar8 = *(uint *)((int)this + 0x1094), *(int *)(unaff_EBP + -0x14) = iVar6, uVar5 < uVar8
          ) {
      uVar8 = 0;
      if (*(int *)((int)this + 0x1074) != 0) {
        uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
        do {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          iVar6 = uVar8 << 2;
          *(undefined4 *)(unaff_EBP + 8) = uVar4;
          do {
            iVar1 = (*(uint *)(unaff_EBP + 0x10) & *(uint *)((int)this + 0x1078)) +
                    (*(uint *)((int)this + 0x107c) & uVar8) * 4;
            if (iVar6 != iVar1) {
              puVar2 = *(undefined4 **)(unaff_EBP + 8);
              puVar9 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EBP + 0xc));
              *puVar2 = *puVar9;
              puVar2[1] = puVar9[1];
              puVar2[2] = puVar9[2];
              puVar2[3] = puVar9[3];
              puVar10 = *(uint **)(unaff_EBP + -0x10);
            }
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
            iVar6 = iVar6 + 1;
          } while (*(uint *)(unaff_EBP + 0x10) < 4);
          uVar4 = *(undefined4 *)(unaff_EBP + 8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < 4);
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
      (**(code **)((int)this + 0x1088))(iVar6,*(undefined4 *)(unaff_EBP + 0xc));
      iVar6 = iVar6 + *(int *)((int)this + 0x1080);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x100;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      uVar5 = *(uint *)(unaff_EBP + -0x18);
    }
    if (((puVar10 + 2 <
          (uint *)(*(int *)((int)this + 0x10c0) +
                  *(int *)((int)this + 0x10ac) * *(int *)((int)this + 0x10a8) * 8)) &&
        (puVar10[2] == 0)) && (puVar10[3] == 0)) {
      puVar10[3] = puVar10[1];
      puVar10[1] = 0;
    }
    else {
      FUN_504018c9((undefined4 *)puVar10[1]);
      *(int *)((int)this + 0x10bc) = *(int *)((int)this + 0x10bc) + -1;
    }
    puVar10[1] = 0;
  }
LAB_50418b9e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


