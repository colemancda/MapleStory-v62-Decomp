/* FUN_5040484c - 0x5040484c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040484c(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int unaff_EBP;
  uint uVar8;
  
  FUN_5042a430();
  iVar3 = *(int *)(unaff_EBP + 0x10);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 1) {
    iVar3 = (-(uint)(*(int *)(*(int *)(unaff_EBP + 8) + 0x60) != 0) & 5) + 0x15;
  }
  else {
    if (iVar3 == 2) {
      uVar8 = -(uint)(*(int *)(*(int *)(unaff_EBP + 8) + 100) != 0) & 0xfffffffb;
    }
    else {
      if (iVar3 != 0x201) {
        if (iVar3 != 0x402) {
          FUN_504050cb(u_Unsupported_pixel_format_504353c0,0);
          FUN_50404b1e();
          return;
        }
        *(undefined4 *)(unaff_EBP + -0x2c) = 0x33545844;
        goto LAB_504048d5;
      }
      uVar8 = -(uint)(*(int *)(*(int *)(unaff_EBP + 8) + 0x68) != 0) & 0xfffffffd;
    }
    iVar3 = uVar8 + 0x1a;
  }
  *(int *)(unaff_EBP + -0x2c) = iVar3;
LAB_504048d5:
  piVar1 = *(int **)(unaff_EBP + 0xc);
  iVar3 = (**(code **)(*piVar1 + 0x60))(piVar1,unaff_EBP + -0x3c,unaff_EBP + -0x40,0,0,0,0);
  if (iVar3 < 0) {
    FUN_5042a366(iVar3,piVar1,&DAT_50435388);
  }
  if ((*(int *)(unaff_EBP + -0x3c) != 0) && (*(int *)(unaff_EBP + -0x40) != 0)) {
    bVar6 = (byte)*(undefined4 *)(unaff_EBP + 0x14);
    iVar3 = 1 << (bVar6 & 0x1f);
    uVar8 = (uint)(iVar3 + -1 + *(int *)(unaff_EBP + -0x3c)) >> (bVar6 & 0x1f);
    uVar4 = (uint)(iVar3 + -1 + *(int *)(unaff_EBP + -0x40)) >> (bVar6 & 0x1f);
    uVar7 = 0;
    *(uint *)(unaff_EBP + -0x48) = uVar8;
    *(uint *)(unaff_EBP + -0x44) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while ((iVar3 = *(int *)(unaff_EBP + 8), *(uint *)(unaff_EBP + -0x18) < uVar8 &&
           (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar3 + 0x268)))) {
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) << 1;
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    while ((*(uint *)(unaff_EBP + -0x1c) < uVar4 &&
           (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(iVar3 + 0x26c)))) {
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) << 1;
      uVar7 = uVar7 + 1;
      *(uint *)(unaff_EBP + -0x14) = uVar7;
    }
    uVar2 = *(uint *)(unaff_EBP + 0x10);
    if (*(int *)(iVar3 + 0x264) != 0) {
      if (uVar7 < uVar2) {
        if (uVar7 + 2 < uVar2) {
          *(uint *)(unaff_EBP + -0x14) = uVar2 - 1;
        }
        if ((*(uint *)(unaff_EBP + -0x14) < 6) && (6 < uVar2)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 6;
          *(undefined4 *)(unaff_EBP + 0x10) = 6;
        }
        else {
          *(uint *)(unaff_EBP + 0x10) = *(uint *)(unaff_EBP + -0x14);
        }
      }
      else {
        if (uVar2 + 2 < uVar7) {
          *(uint *)(unaff_EBP + 0x10) = uVar7 - 1;
        }
        if ((*(uint *)(unaff_EBP + 0x10) < 6) && (6 < uVar7)) {
          *(undefined4 *)(unaff_EBP + 0x10) = 6;
          *(undefined4 *)(unaff_EBP + -0x14) = 6;
        }
        else {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + 0x10);
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while (*(uint *)(unaff_EBP + -0x24) < uVar4) {
      uVar7 = uVar4 - *(int *)(unaff_EBP + -0x24);
      *(uint *)(unaff_EBP + -0x34) = uVar7;
      if (*(uint *)(unaff_EBP + -0x1c) <= uVar7) {
        *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x1c);
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        while (*(int *)(unaff_EBP + -0x20) != 0) {
          iVar3 = *(int *)(unaff_EBP + -0x20) + -1;
          if ((uint)(1 << ((byte)iVar3 & 0x1f)) < *(uint *)(unaff_EBP + -0x34)) break;
          *(int *)(unaff_EBP + -0x20) = iVar3;
        }
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      while (*(uint *)(unaff_EBP + -0x30) < uVar8) {
        uVar8 = uVar8 - *(int *)(unaff_EBP + -0x30);
        if (*(uint *)(unaff_EBP + -0x18) <= uVar8) {
          uVar8 = *(uint *)(unaff_EBP + -0x18);
        }
        uVar4 = *(uint *)(unaff_EBP + 0x10);
        *(uint *)(unaff_EBP + -0x28) = uVar4;
        if (uVar4 != 0) {
          while (uVar4 != 0) {
            uVar7 = uVar4 - 1;
            if ((uint)(1 << ((byte)uVar7 & 0x1f)) < uVar8) break;
            *(uint *)(unaff_EBP + -0x28) = uVar7;
            uVar4 = uVar7;
          }
        }
        if (*(int *)(*(int *)(unaff_EBP + 8) + 0x264) != 0) {
          if (uVar4 < *(uint *)(unaff_EBP + -0x20)) {
            *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x20);
          }
          else {
            *(uint *)(unaff_EBP + -0x20) = uVar4;
          }
        }
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar5 = FUN_50405763((void *)(unaff_EBP + -0x38));
        FUN_50404b2f();
        piVar1 = *(int **)(unaff_EBP + 0xc);
        iVar3 = *(int *)(unaff_EBP + -0x30);
        bVar6 = (byte)*(undefined4 *)(unaff_EBP + 0x14);
        iVar5 = (**(code **)(*piVar1 + 0x30))
                          (piVar1,iVar3 << (bVar6 & 0x1f),
                           *(int *)(unaff_EBP + -0x24) << (bVar6 & 0x1f),
                           -(uint)(iVar5 != 0) & iVar5 + 4U);
        if (iVar5 < 0) {
          FUN_5042a366(iVar5,piVar1,&DAT_50435388);
        }
        piVar1 = *(int **)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        uVar4 = *(uint *)(unaff_EBP + -0x44);
        uVar8 = *(uint *)(unaff_EBP + -0x48);
        *(int *)(unaff_EBP + -0x30) = iVar3 + *(int *)(unaff_EBP + -0x18);
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x1c);
    }
  }
  FUN_50404b1e();
  return;
}


