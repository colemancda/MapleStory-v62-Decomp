/* FUN_007bb89d - 0x007bb89d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bb89d(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int iVar9;
  undefined4 extraout_ECX_00;
  int iVar10;
  int unaff_EBP;
  uint *puVar11;
  undefined4 *_Dst;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uStack_ad4;
  
  FUN_00879bb8();
  iVar3 = DAT_00978368 + 0x3128;
  *(int *)(unaff_EBP + -0x48) = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x54) = 1;
  *(int *)(unaff_EBP + -0x50) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_004133f0();
  puVar6 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = *puVar6;
  uVar2 = FUN_0044dddc();
  *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x68) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(extraout_ECX + 0x4b0);
  iVar3 = FUN_00653e6a();
  *(int *)(unaff_EBP + -0x40) = iVar3;
  if (((iVar3 < 0) && (puVar6 != (undefined4 *)0x0)) && (iVar3 = FUN_00653f88(), iVar3 == 0)) {
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  if ((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) == 0x12) {
LAB_007bb966:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    piVar4 = (int *)FUN_00486ada();
    if ((*(int *)((-(uint)(*piVar4 != 0) & *piVar4 - 0xcU) + 0x110) == 0) &&
       (*(int *)(unaff_EBP + -0x3c) != 0x231c4a)) {
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
    }
    else {
      *(undefined1 *)(unaff_EBP + -0x11) = 0;
    }
    FUN_004125d9();
    if ((*(char *)(unaff_EBP + -0x11) != '\0') || (*(int *)(unaff_EBP + -0x40) < 0))
    goto LAB_007bb966;
    FUN_006509a1();
    *(uint *)(unaff_EBP + -0x70) = *(uint *)(extraout_ECX + 0x52c) & 1;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 0x2a7c);
    uVar2 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    uVar2 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    FUN_004c2648();
    uVar2 = FUN_00653336();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
    iVar3 = FUN_00413367();
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(unaff_EBP + -0x24) = iVar3;
    if (0xe < iVar3) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    }
    iVar3 = FUN_00413367();
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    if (0x13 < iVar3) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x14;
    }
    iVar3 = FUN_0078c1bd();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 4);
      piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar3 = *piVar4;
      iVar9 = *(int *)(extraout_ECX + 0x1efc) - iVar3;
      if ((((iVar9 < -5) || (5 < iVar9)) ||
          (iVar9 = *(int *)(extraout_ECX + 0x1f00) - *(int *)(unaff_EBP + -0x10), iVar9 < -0x95)) ||
         (0x95 < iVar9)) {
        *(undefined4 *)(extraout_ECX + 0x1f04) = 0;
        *(int *)(extraout_ECX + 0x1efc) = iVar3;
        *(undefined4 *)(extraout_ECX + 0x1f00) = *(undefined4 *)(unaff_EBP + -0x10);
      }
      else {
        if (99 < *(int *)(extraout_ECX + 0x1f04)) goto LAB_007bbc52;
        *(int *)(extraout_ECX + 0x1f04) = *(int *)(extraout_ECX + 0x1f04) + 1;
      }
      FUN_00790b31();
      iVar3 = *(int *)(unaff_EBP + -0x40);
      uVar5 = FUN_0043f6fe();
      iVar9 = *(int *)((uint)(uVar5 < 0x80000000) * 0x3f4 + extraout_ECX + 0x53c);
      iVar16 = (&DAT_00978688)[iVar3 * 6];
      iVar3 = (&DAT_00978684)[iVar3 * 6];
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(int *)(unaff_EBP + -0x18) = (iVar9 * iVar16) / iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_006509a1();
      FUN_00411537();
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(extraout_ECX + 0x52c);
      iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 4);
      (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      if ((*(byte *)(unaff_EBP + 0xc) & 1) == 0) {
        *(int *)(unaff_EBP + -0x5c) = -*(int *)(unaff_EBP + -0x5c);
        *(int *)(unaff_EBP + -100) = -*(int *)(unaff_EBP + -100);
        FUN_004459fe();
      }
      (*DAT_0097b54c)();
      FUN_004ca3ba();
      iVar3 = *(int *)(unaff_EBP + -0x20);
      uVar5 = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while ((iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)))) {
        *(uint *)(unaff_EBP + -0x1c) = uVar5 + 1;
        *(uint *)(unaff_EBP + -0x10) = uVar5 + 1;
        while ((iVar3 != 0 && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar3 + -4)))) {
          if (*(int *)(*(int *)(iVar3 + *(uint *)(unaff_EBP + -0x10) * 4) + 0x34) <
              *(int *)(*(int *)(iVar3 + uVar5 * 4) + 0x34)) {
            FUN_007bd53f();
            iVar3 = *(int *)(unaff_EBP + -0x20);
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          uVar5 = *(uint *)(unaff_EBP + 0xc);
        }
        uVar5 = *(uint *)(unaff_EBP + -0x1c);
        *(uint *)(unaff_EBP + 0xc) = uVar5;
      }
      puVar6 = (undefined4 *)(unaff_EBP + -0x124);
      for (uVar5 = 0; (iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4))); uVar5 = uVar5 + 1) {
        *puVar6 = *(undefined4 *)(*(int *)((iVar3 - (unaff_EBP + -0x124)) + (int)puVar6) + 0x34);
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      _memset((void *)(unaff_EBP + -0xd4),0,0x3c);
      uStack_ad4 = 0x7bbcbd;
      _memset((void *)(unaff_EBP + -0x174),0,0x50);
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while ((*(int *)(unaff_EBP + -0x20) != 0 &&
             (*(uint *)(unaff_EBP + 0xc) < *(uint *)(*(int *)(unaff_EBP + -0x20) + -4)))) {
        (*DAT_0097b504)();
        uVar2 = FUN_0045e2eb();
        FUN_0045e2eb();
        uStack_ad4 = uVar2;
        (*DAT_0097b54c)(unaff_EBP + -0x80);
        puVar6 = (undefined4 *)FUN_004f1aaa();
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *puVar6 = *(undefined4 *)(unaff_EBP + -0x80);
        puVar6[1] = *(undefined4 *)(unaff_EBP + -0x7c);
        puVar6[2] = *(undefined4 *)(unaff_EBP + -0x78);
        puVar6[3] = *(undefined4 *)(unaff_EBP + -0x74);
      }
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      iVar3 = FUN_005d541b();
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(int *)(unaff_EBP + -0x10) = iVar3;
      if (0 < iVar3) {
        puVar11 = (uint *)(unaff_EBP + -0xd4);
        do {
          puVar7 = (uint *)(unaff_EBP + -0x174);
          for (uVar5 = 0;
              (*(int *)(unaff_EBP + -0x20) != 0 &&
              (uVar5 < *(uint *)(*(int *)(unaff_EBP + -0x20) + -4))); uVar5 = uVar5 + 1) {
            if ((*puVar11 & 1 << ((byte)uVar5 & 0x1f)) != 0) {
              *puVar7 = *puVar7 | 1 << ((byte)*(undefined4 *)(unaff_EBP + 0xc) & 0x1f);
            }
            puVar7 = puVar7 + 1;
          }
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
          puVar11 = puVar11 + 1;
        } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x10));
      }
      iVar3 = *(int *)(unaff_EBP + -0x10);
      if (0 < iVar3) {
        puVar6 = (undefined4 *)(unaff_EBP + -0x1b0);
        _Dst = (undefined4 *)(unaff_EBP + -0xa98);
        *(int *)(unaff_EBP + 0xc) = iVar3;
        do {
          _memset(_Dst,0,0x98);
          *_Dst = *puVar6;
          uVar2 = FUN_005c634c();
          _Dst[2] = uVar2;
          uVar2 = FUN_0067d28e();
          _Dst[3] = uVar2;
          uVar2 = FUN_005c9cb2();
          _Dst[1] = uVar2;
          _Dst = _Dst + 0x26;
          puVar6 = puVar6 + 1;
          piVar4 = (int *)(unaff_EBP + 0xc);
          *piVar4 = *piVar4 + -1;
        } while (*piVar4 != 0);
        iVar3 = *(int *)(unaff_EBP + -0x10);
      }
      if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
         ((iVar9 = **(int **)(unaff_EBP + 8), iVar9 != 0x3d0cea && (iVar9 != 0x4faa91)))) {
        *(undefined4 *)(unaff_EBP + -0x24) = 1;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      if (0 < iVar3) {
        *(int *)(unaff_EBP + 0xc) = unaff_EBP + -0xd4;
        piVar4 = (int *)(unaff_EBP + -0xa84);
        *(int *)(unaff_EBP + -0x1c) = iVar3;
        do {
          iVar3 = FUN_00455c59();
          uStack_ad4 = *(undefined4 *)(iVar3 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar9 = FUN_0066ee54();
          iVar3 = *(int *)(unaff_EBP + -0x74);
          *piVar4 = iVar9;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (iVar3 != 0) {
            FUN_0045e7c2();
            *(undefined4 *)(unaff_EBP + -0x74) = 0;
          }
          _memset((void *)(unaff_EBP + -0x98),0,0x14);
          iVar3 = *piVar4;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          piVar12 = piVar4;
          if (0 < iVar3) {
            do {
              piVar1 = (int *)(unaff_EBP + -0x98 + (*(int *)(unaff_EBP + 8) % 5) * 4);
              *piVar1 = *piVar1 + piVar12[1];
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
              piVar12 = piVar12 + 1;
            } while (*(int *)(unaff_EBP + 8) < *piVar4);
          }
          *(undefined4 *)(unaff_EBP + 8) = 0;
          piVar12 = (int *)(unaff_EBP + -0x98);
          while( true ) {
            iVar3 = *piVar4;
            if (5 < iVar3) {
              iVar3 = 5;
            }
            if (iVar3 <= *(int *)(unaff_EBP + 8)) break;
            iVar3 = FUN_00413367();
            if ((0 < iVar3) && (0 < *piVar12)) {
              *piVar12 = iVar3;
            }
            iVar3 = FUN_005dcae0();
            if (iVar3 == 0) {
              *piVar12 = 0;
            }
            *(undefined4 **)(unaff_EBP + -0x84) = &uStack_ad4;
            uStack_ad4 = extraout_ECX_00;
            FUN_004033a1(&DAT_0097812c);
            iVar3 = piVar4[0x20];
            iVar9 = piVar4[0x1f];
            uVar2 = *(undefined4 *)(unaff_EBP + 8);
            iVar10 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x68);
            uVar17 = 0;
            iVar16 = *piVar12;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            uVar15 = 1;
            iVar14 = piVar4[-4];
            uVar13 = *(undefined4 *)(unaff_EBP + -0x3c);
            uVar8 = FUN_0067e5d1(uVar13,iVar10,iVar14,1,iVar16,0,uVar2,iVar9,iVar3);
            FUN_005cbf42(uVar8,uVar13,iVar10,iVar14,uVar15,iVar16,uVar17,uVar2,iVar9,iVar3);
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
            piVar12 = piVar12 + 1;
          }
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 4;
          piVar4 = piVar4 + 0x26;
          piVar12 = (int *)(unaff_EBP + -0x1c);
          *piVar12 = *piVar12 + -1;
        } while (*piVar12 != 0);
      }
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar3 = FUN_00429303();
      *(undefined1 *)(unaff_EBP + 8) = *(undefined1 *)(iVar3 + 0xf8);
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457d37();
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457cda();
      FUN_007d1e08();
      FUN_00457d37();
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        piVar4 = (int *)(unaff_EBP + -0xa98);
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x10);
        do {
          FUN_004b8c9b();
          FUN_00457d37();
          FUN_00457cda();
          FUN_005c5474();
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x10))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x10))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x14))();
          FUN_0045d247();
          (**(code **)(*(int *)(*piVar4 + 4) + 0x14))();
          FUN_0045d247();
          FUN_00457cda();
          iVar3 = 0;
          if (0 < piVar4[5]) {
            *(int **)(unaff_EBP + 8) = piVar4 + 6;
            do {
              FUN_00457d37();
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
              iVar3 = iVar3 + 1;
            } while (iVar3 < piVar4[5]);
          }
          FUN_005d0a74();
          FUN_00457d37();
          piVar4 = piVar4 + 0x26;
          piVar12 = (int *)(unaff_EBP + 0xc);
          *piVar12 = *piVar12 + -1;
        } while (*piVar12 != 0);
      }
      (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      FUN_0045d247();
      (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      FUN_0045d247();
      FUN_00457cda();
      for (uVar5 = 0;
          (*(int *)(unaff_EBP + -0x20) != 0 && (uVar5 < *(uint *)(*(int *)(unaff_EBP + -0x20) + -4))
          ); uVar5 = uVar5 + 1) {
        FUN_00457d37();
        FUN_00457cda();
      }
      FUN_0045d247();
      FUN_004751b2();
      FUN_007b4235();
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0045ebca();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004f1a88();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_007bd51d();
      uVar2 = 1;
      goto LAB_007bc25f;
    }
LAB_007bbc52:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_007a934b();
  uVar2 = 0;
LAB_007bc25f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


