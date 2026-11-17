/* ptr_0066cae8 - 0x0066cae8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_0066cae8(void)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  bool bVar11;
  int iVar12;
  uint unaff_EBX;
  int *piVar13;
  int unaff_EBP;
  int unaff_ESI;
  code *pcVar14;
  float10 fVar15;
  
code_r0x0066cae8:
  uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
  *(undefined4 *)(unaff_EBP + -0x30) = in_EAX;
  iVar9 = unaff_ESI + 0x30;
  uVar5 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
  iVar8 = *(int *)(unaff_EBP + -4);
  uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
  uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
  dVar2 = (double)*(int *)(unaff_EBP + -0x10);
  *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
  *(double *)(unaff_EBP + -0xc) =
       (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
  if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
    if (dVar2 == *(double *)(unaff_EBP + -0xc)) goto LAB_0066cb71;
  }
  else {
    FUN_00671963();
    dVar2 = *(double *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(uint *)(unaff_EBP + -0x7c) = *(uint *)(unaff_EBP + -0x18) % unaff_EBX;
  dVar2 = (double)*(longlong *)(unaff_EBP + -0x7c) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
          _DAT_008ed7a0 + dVar2;
LAB_0066cb71:
  dVar2 = (dVar2 * _DAT_008ed778 + (double)*(int *)(unaff_EBP + -0x30)) *
          (double)*(int *)(unaff_EBP + 0xc) * _DAT_008ed770;
LAB_0066ddc6:
  *(double *)(unaff_EBP + -0x20) = dVar2;
switchD_0066cf2b_caseD_22:
  if (*(int *)(unaff_EBP + 0x50) == 0) {
    iVar8 = FUN_00413367();
    piVar13 = *(int **)(unaff_EBP + 0x18);
    if (iVar8 < *piVar13) {
      iVar8 = FUN_00413367();
      *(int *)(unaff_EBP + -0x10) = *piVar13 - iVar8;
      *(double *)(unaff_EBP + -0x20) =
           (_DAT_008e9978 - (double)*(int *)(unaff_EBP + -0x10)) * *(double *)(unaff_EBP + -0x20) *
           _DAT_008e8cd0;
    }
  }
  else {
    piVar13 = *(int **)(unaff_EBP + 0x18);
  }
  fVar15 = (float10)FUN_0066e37d(*(undefined8 *)(unaff_EBP + -0x20),
                                 *(undefined4 *)(unaff_EBP + 0x34));
  *(double *)(unaff_EBP + -0x20) = (double)fVar15;
  fVar15 = (float10)FUN_0066e50b(*(undefined8 *)(unaff_EBP + -0x20),piVar13 + 1);
  *(double *)(unaff_EBP + -0x20) = (double)fVar15;
  if ((((*(int *)(unaff_EBP + -0x24) != 0x14011d) && (*(int *)(unaff_EBP + -0x24) != 0x3eba9c)) &&
      (*(int *)(unaff_EBP + -0x24) != 0x40413a)) && (*(code **)(unaff_EBP + -0x24) != ptr_004e23ec))
  {
    iVar8 = piVar13[0xe] + piVar13[0xd];
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    *(int *)(unaff_EBP + -0x30) = iVar8;
    if (0x7ce < iVar8) {
      *(undefined4 *)(unaff_EBP + -0x30) = 1999;
    }
    iVar8 = *(int *)(unaff_EBP + -4);
    *(double *)(unaff_EBP + -0xc) = (double)*(int *)(unaff_EBP + -0x30) * _DAT_008e89d0;
    dVar2 = (double)*(int *)(unaff_EBP + -0x30) * _DAT_008ecb60;
    *(double *)(unaff_EBP + -0x14) = dVar2;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
    if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
      if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066dee3;
    }
    else {
      FUN_00671963();
      dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066dee3:
      *(undefined4 *)(unaff_EBP + -0x170) = 0;
      *(uint *)(unaff_EBP + -0x174) = uVar3 % 10000000;
      dVar2 = (double)*(longlong *)(unaff_EBP + -0x174) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
              _DAT_008ed7a0 + dVar2;
    }
    *(double *)(unaff_EBP + -0x20) = *(double *)(unaff_EBP + -0x20) - dVar2;
  }
  uVar6 = __ftol();
  *(undefined4 *)(unaff_EBP + -8) = uVar6;
  if (*(int *)(unaff_EBP + 0x34) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_006509a1();
    uVar6 = FUN_00413367();
  }
  *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
  iVar8 = FUN_00413367();
  uVar6 = FUN_0065361e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x24),iVar8 + -1)
  ;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
  if ((*(int *)(unaff_EBP + -0x24) == 0x4f837c) || (*(int *)(unaff_EBP + -0x24) == 0x4f837d)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iVar8 = FUN_00650dae(*(undefined4 *)(unaff_EBP + 8));
    if ((iVar8 != 0) && (*(int *)(unaff_EBP + -0x18) != 0)) {
      FUN_006509a1();
      iVar8 = FUN_00413367();
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + iVar8;
    }
  }
  if ((*(int *)(unaff_EBP + 0x4c) == 0) || (*(int *)(unaff_EBP + -0x24) != 0x127a7a)) {
    if (0 < *(int *)(unaff_EBP + -0x30)) {
      iVar8 = *(int *)(unaff_EBP + -0x30);
      goto LAB_0066dfe7;
    }
  }
  else {
    iVar8 = *(int *)(unaff_EBP + 0x4c);
LAB_0066dfe7:
    *(double *)(unaff_EBP + -0x20) = (double)iVar8 * _DAT_008e8cd0 * *(double *)(unaff_EBP + -0x20);
  }
  if (0 < *(int *)(unaff_EBP + -0x28)) {
    *(double *)(unaff_EBP + -0x20) =
         (double)*(int *)(unaff_EBP + -0x28) * _DAT_008e8cd0 * *(double *)(unaff_EBP + -0x20);
  }
  if (((((*(int *)(unaff_EBP + -0x24) != 0x30fefb) && (*(int *)(unaff_EBP + -0x24) != 0x3eba9c)) &&
       (*(int *)(unaff_EBP + -0x24) != 0x406849)) || (*(int *)(unaff_EBP + 0x2c) == 0x3a)) &&
     (((0 < *(int *)(unaff_EBP + -0x44) && (0 < *(int *)(unaff_EBP + -0x3c))) &&
      ((0 < *(int *)(unaff_EBP + -0x6c) ||
       ((iVar8 = FUN_00413367(), iVar8 != 0 || (*(int *)(unaff_EBP + -0x4c) != 0)))))))) {
    iVar8 = *(int *)(unaff_EBP + -4);
    *(undefined4 *)(unaff_EBP + -0x180) = 0;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    *(uint *)(unaff_EBP + -0x184) = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4) % 10000000;
    if ((double)*(longlong *)(unaff_EBP + -0x184) * _DAT_008ed738 <
        (double)*(int *)(unaff_EBP + -0x44)) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x3c) + -100;
      iVar8 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(*(int *)(unaff_EBP + 0x40) + *(int *)(unaff_EBP + 0x20) * 4) = 1;
      *(double *)(unaff_EBP + -0x20) =
           (double)iVar8 * _DAT_008e8cd0 * (double)*(int *)(unaff_EBP + -8) +
           *(double *)(unaff_EBP + -0x20);
    }
  }
  if ((*(int *)(unaff_EBP + -0x24) != 0x14011d) &&
     (iVar8 = piVar13[0x3b], *(int *)(unaff_EBP + -8) = iVar8, iVar8 != 0)) {
    *(double *)(unaff_EBP + -0x20) =
         (double)*(int *)(unaff_EBP + -8) * *(double *)(unaff_EBP + -0x20) * _DAT_008e8cd0;
  }
  if (((*(int *)(unaff_EBP + 0x30) != 0) && (*(int *)(unaff_EBP + -0x24) != 0x3ee1ab)) &&
     (iVar8 = *(int *)(unaff_EBP + 0x1c) / 2, iVar8 <= *(int *)(unaff_EBP + 0x20))) {
    if (*(int *)(unaff_EBP + 0x34) == 0) {
      FUN_006509a1();
      iVar9 = FUN_00413367();
      iVar12 = (*(int *)(unaff_EBP + 0x20) - iVar8) * 4;
      *(int *)(unaff_EBP + -8) = (*(int *)(iVar12 + *(int *)(unaff_EBP + 0x3c)) * iVar9) / 100;
      iVar8 = *(int *)(unaff_EBP + -8);
    }
    else {
      FUN_006509a1();
      iVar9 = FUN_00413367();
      iVar12 = (*(int *)(unaff_EBP + 0x20) - iVar8) * 4;
      *(int *)(unaff_EBP + -8) = (*(int *)(iVar12 + *(int *)(unaff_EBP + 0x3c)) * iVar9) / 100;
      iVar8 = *(int *)(unaff_EBP + -8);
    }
    *(double *)(unaff_EBP + -0x20) = (double)iVar8;
    *(undefined4 *)(*(int *)(unaff_EBP + 0x40) + *(int *)(unaff_EBP + 0x20) * 4) =
         *(undefined4 *)(iVar12 + *(int *)(unaff_EBP + 0x40));
  }
  if (*(int *)(unaff_EBP + -0x24) == 0x406849) {
    iVar8 = FUN_00413367();
    if (iVar8 == 0) {
      dVar2 = 0.0;
    }
    else {
      FUN_006509a1();
      iVar9 = FUN_00413367();
      iVar8 = FUN_00413367();
      DVar10 = timeGetTime();
      iVar8 = (int)(DVar10 - iVar8) / 1000;
      if (iVar9 <= iVar8) {
        iVar8 = iVar9;
      }
      *(int *)(unaff_EBP + -8) = iVar8 / 3 + 1;
      dVar2 = (double)*(int *)(unaff_EBP + -8) * *(double *)(unaff_EBP + -0x20);
    }
    piVar13 = *(int **)(unaff_EBP + 0x18);
    *(double *)(unaff_EBP + -0x20) = dVar2;
  }
  iVar8 = *(int *)(unaff_EBP + 0x44);
  if (iVar8 != 0) {
    if (*(int *)(unaff_EBP + -0x24) == 0x4dd5cc) {
      *(int *)(unaff_EBP + -8) = (iVar8 * 0x5a) / 1000 + 10;
      iVar8 = *(int *)(unaff_EBP + -8);
    }
    else {
      *(int *)(unaff_EBP + -8) = (iVar8 * 0x5a) / 2000 + 10;
      iVar8 = *(int *)(unaff_EBP + -8);
    }
    *(double *)(unaff_EBP + -0x20) = (double)iVar8 * *(double *)(unaff_EBP + -0x20) * _DAT_008e8cd0;
  }
  if ((piVar13[0x51] != 0) &&
     (*(int *)(*(int *)(unaff_EBP + 0x40) + *(int *)(unaff_EBP + 0x20) * 4) == 0)) {
    **(undefined4 **)(unaff_EBP + -0x40) = 0;
    goto LAB_0066e317;
  }
  if (*(int *)(unaff_EBP + 0x48) != 0) {
    *(double *)(unaff_EBP + -0x20) =
         ((double)*(int *)(unaff_EBP + 0x48) + _DAT_008e9978) * *(double *)(unaff_EBP + -0x20) *
         _DAT_008e8cd0;
  }
  FUN_0066c156();
  if (*(int *)(unaff_EBP + -0x24) == 0x4e23ef) {
    if (*(int *)(unaff_EBP + 0x20) == 4) {
      dVar2 = *(double *)(unaff_EBP + -0x20) + *(double *)(unaff_EBP + -0x20);
    }
    else {
      if (*(int *)(unaff_EBP + 0x20) != 5) goto LAB_0066e2e9;
      dVar2 = *(double *)(unaff_EBP + -0x20) * _DAT_008ed758;
    }
    *(double *)(unaff_EBP + -0x20) = dVar2;
  }
LAB_0066e2e9:
  uVar6 = __ftol();
LAB_0066e312:
  **(undefined4 **)(unaff_EBP + -0x40) = uVar6;
LAB_0066e317:
  *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
  if (*(int *)(unaff_EBP + 0x1c) <= *(int *)(unaff_EBP + 0x20)) {
    return;
  }
  iVar8 = *(int *)(unaff_EBP + 0x18);
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + 0x3c) + *(int *)(unaff_EBP + 0x20) * 4);
  iVar9 = *(int *)(unaff_EBP + 0x50);
  *(undefined4 **)(unaff_EBP + -0x40) = puVar1;
  *puVar1 = 0;
  if (iVar9 == 0) {
    if (*(int *)(iVar8 + 0x1a0) != 0) goto LAB_0066e317;
    iVar8 = *(int *)(unaff_EBP + 0x18);
  }
  uVar3 = *(uint *)(unaff_EBP + -0x68 + (*(int *)(unaff_EBP + -4) % 7) * 4);
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
  iVar9 = *(int *)(iVar8 + 0x120);
  *(uint *)(unaff_EBP + -0x28) = uVar3 % 100;
  if ((iVar9 != 0) && (iVar9 = FUN_00413367(), iVar9 < *(int *)(unaff_EBP + -0x28))) {
LAB_0066c6d0:
    **(undefined4 **)(unaff_EBP + -0x40) = 1;
    goto LAB_0066e317;
  }
  if (*(int *)(unaff_EBP + -0x24) == 0x31260f) {
    if (*(int *)(unaff_EBP + 0x28) == 1) {
      iVar8 = *(int *)(unaff_EBP + -4);
      *(undefined8 *)(unaff_EBP + -0x14) = 0;
      *(undefined8 *)(unaff_EBP + -0xc) = _DAT_008ed7a8;
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
      uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
      FUN_00671963();
      *(undefined4 *)(unaff_EBP + -0x128) = 0;
      *(uint *)(unaff_EBP + -300) = uVar3 % 10000000;
      uVar6 = __ftol();
      goto LAB_0066e312;
    }
  }
  else if (*(int *)(unaff_EBP + -0x24) == 0x3ee1b0) {
    iVar9 = *(int *)(unaff_EBP + -4);
    *(undefined8 *)(unaff_EBP + -0x14) = 0;
    *(double *)(unaff_EBP + -0xc) = _DAT_008e9978;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar9 % 7) * 4);
    FUN_00671963();
    *(undefined4 *)(unaff_EBP + -400) = 0;
    *(uint *)(unaff_EBP + -0x194) = *(uint *)(unaff_EBP + -0x28) % 10000000;
    if ((double)*(int *)(unaff_EBP + -0x70) <=
        (double)*(longlong *)(unaff_EBP + -0x194) *
        (*(double *)(unaff_EBP + -0x14) - *(double *)(unaff_EBP + -0xc)) * _DAT_008ed7a0 +
        *(double *)(unaff_EBP + -0xc)) {
      **(undefined4 **)(unaff_EBP + -0x40) = 0;
      goto LAB_0066e317;
    }
  }
  if (((*(int *)(unaff_EBP + 0x28) != 3) && (*(int *)(unaff_EBP + -0x24) != 0)) &&
     (iVar9 = FUN_00413367(), iVar9 != 0)) goto LAB_0066e317;
  iVar8 = *(int *)(iVar8 + 0x78) + *(int *)(iVar8 + 0x74);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  *(int *)(unaff_EBP + -0x30) = iVar8;
  if (0x3e6 < iVar8) {
    *(undefined4 *)(unaff_EBP + -0x30) = 999;
  }
  if (*(int *)(unaff_EBP + 0x34) != 0) {
    if (**(int **)(unaff_EBP + 0x34) == 0x12a193) goto LAB_0066c6d0;
    iVar8 = FUN_006509a1();
    *(int *)(unaff_EBP + -0x18) = iVar8 + 0xdc;
    iVar8 = FUN_00413367();
    if (iVar8 == 0) goto LAB_0066c7ed;
    uVar6 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    iVar8 = FUN_00413367();
    iVar8 = **(int **)(unaff_EBP + 0x18) - iVar8;
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    dVar2 = (double)*(int *)(unaff_EBP + -0x28) * _DAT_008e9978;
    iVar9 = *(int *)(unaff_EBP + -4);
    *(int *)(unaff_EBP + -0x28) = iVar8 * 0x96;
    dVar4 = (double)*(int *)(unaff_EBP + -0x28) + _DAT_008ed7b8;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    dVar2 = dVar2 / dVar4;
    uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar9 % 7) * 4);
    *(double *)(unaff_EBP + -0xc) = dVar2 * _DAT_008ed6f8;
    dVar2 = dVar2 * _DAT_008ed790;
    *(double *)(unaff_EBP + -0x14) = dVar2;
    if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
      if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066c799;
    }
    else {
      FUN_00671963();
      dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066c799:
      *(undefined4 *)(unaff_EBP + -0x88) = 0;
      *(uint *)(unaff_EBP + -0x8c) = uVar3 % 10000000;
      dVar2 = (double)*(longlong *)(unaff_EBP + -0x8c) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
              _DAT_008ed7a0 + dVar2;
    }
    if ((double)*(int *)(unaff_EBP + -0x30) <= dVar2) goto code_r0x0066c7d8;
    goto LAB_0066e317;
  }
LAB_0066c7ed:
  iVar8 = *(int *)(unaff_EBP + -4);
  *(double *)(unaff_EBP + -0xc) = *(double *)(unaff_EBP + -0x18c) * _DAT_008ed6f8;
  dVar2 = *(double *)(unaff_EBP + -0x18c) * _DAT_008ed790;
  *(double *)(unaff_EBP + -0x14) = dVar2;
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
  uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
  if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
    if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066c841;
  }
  else {
    FUN_00671963();
    dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066c841:
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(uint *)(unaff_EBP + -0x9c) = uVar3 % 10000000;
    dVar2 = (double)*(longlong *)(unaff_EBP + -0x9c) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
            _DAT_008ed7a0 + dVar2;
  }
  if ((*(int *)(unaff_EBP + 0x50) == 0) && (dVar2 < (double)*(int *)(unaff_EBP + -0x30)))
  goto LAB_0066e317;
  iVar8 = FUN_00413367();
  if (iVar8 != 0) {
    iVar8 = *(int *)(unaff_EBP + -4);
    *(undefined8 *)(unaff_EBP + -0x14) = 0;
    *(double *)(unaff_EBP + -0xc) = _DAT_008e9978;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
    FUN_00671963();
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
    *(uint *)(unaff_EBP + -0x11c) = uVar3 % 10000000;
    if (_DAT_008ed788 <
        (double)*(longlong *)(unaff_EBP + -0x11c) *
        (*(double *)(unaff_EBP + -0x14) - *(double *)(unaff_EBP + -0xc)) * _DAT_008ed7a0 +
        *(double *)(unaff_EBP + -0xc)) {
      iVar8 = *(int *)(unaff_EBP + -4);
      *(undefined4 *)(unaff_EBP + -0xa8) = 0;
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
      *(uint *)(unaff_EBP + -0xac) = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4) % 10000000;
      iVar8 = __ftol();
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + iVar8;
      goto LAB_0066e317;
    }
  }
  unaff_EBX = 10000000;
  pcVar14 = *(code **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (((pcVar14 == (code *)0x111aee) || (pcVar14 == (code *)0x12a18f)) ||
     ((pcVar14 == (code *)0x14282b || (pcVar14 == (code *)0x12a191)))) {
    iVar8 = *(int *)(unaff_EBP + -4);
    *(undefined8 *)(unaff_EBP + -0x14) = 0;
    *(double *)(unaff_EBP + -0xc) = _DAT_008ecb30;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
    FUN_00671963();
    *(undefined4 *)(unaff_EBP + -0x158) = 0;
    *(uint *)(unaff_EBP + -0x15c) = uVar3 % 10000000;
    if (_DAT_008ea308 <=
        (double)*(longlong *)(unaff_EBP + -0x15c) *
        (*(double *)(unaff_EBP + -0x14) - *(double *)(unaff_EBP + -0xc)) * _DAT_008ed7a0 +
        *(double *)(unaff_EBP + -0xc)) {
      pcVar14 = *(code **)(unaff_EBP + -0x24);
      goto LAB_0066c9e0;
    }
LAB_0066c9ee:
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
LAB_0066c9f5:
    pcVar14 = *(code **)(unaff_EBP + -0x24);
  }
  else {
LAB_0066c9e0:
    if (pcVar14 == (code *)0x111af0) {
      if (*(int *)(unaff_EBP + 0x20) == 1) goto LAB_0066c9ee;
      goto LAB_0066c9f5;
    }
  }
  *(undefined8 *)(unaff_EBP + -0x20) = 0;
  if (((*(int *)(unaff_EBP + -0x48) == 0x2d) || (*(int *)(unaff_EBP + -0x48) == 0x2e)) &&
     (iVar8 = FUN_00670522(), iVar8 == 0)) {
    if ((pcVar14 == (code *)0x30d7eb) || (pcVar14 == (code *)0x2f514b)) {
      in_EAX = FUN_00413367();
      goto code_r0x0066cae8;
    }
    uVar5 = FUN_00413367();
    uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    iVar9 = unaff_ESI + 0x30;
    uVar5 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    iVar8 = *(int *)(unaff_EBP + -4);
    uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
    uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    dVar2 = (double)*(int *)(unaff_EBP + -0x28);
    *(double *)(unaff_EBP + -0x2c) = (double)*(int *)(unaff_EBP + -0x28);
    *(double *)(unaff_EBP + -0xc) =
         (double)*(int *)(unaff_EBP + -0x18) * *(double *)(unaff_EBP + -0x38);
    if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
      if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066caab;
    }
    else {
      FUN_00671963();
      dVar2 = *(double *)(unaff_EBP + -0x2c);
LAB_0066caab:
      *(undefined4 *)(unaff_EBP + -0xb8) = 0;
      *(uint *)(unaff_EBP + -0xbc) = *(uint *)(unaff_EBP + -0x30) % 10000000;
      dVar2 = (double)*(longlong *)(unaff_EBP + -0xbc) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
              _DAT_008ed7a0 + dVar2;
    }
    dVar4 = (double)*(int *)(unaff_EBP + -0x10);
  }
  else {
    if (*(int *)(unaff_EBP + -0x48) != 0x31) {
      if (((*(int *)(unaff_EBP + -0x48) != 0x2f) || (iVar8 = FUN_00670522(), iVar8 != 0)) ||
         ((pcVar14 == (code *)0x406849 || (pcVar14 == (code *)0x3ee1b0)))) goto LAB_0066ce4b;
      uVar5 = FUN_00413367();
      uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
      *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
      iVar8 = unaff_ESI + 0x30;
      uVar7 = FUN_00413367();
      uVar5 = *(undefined4 *)(unaff_ESI + 0x50);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
      uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar5,iVar8,uVar6);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
      iVar8 = *(int *)(unaff_EBP + -4);
      uVar6 = *(undefined4 *)(unaff_ESI + 0x50);
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
      uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
      uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar6);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
      dVar2 = (double)*(int *)(unaff_EBP + -0x10);
      *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
      *(double *)(unaff_EBP + -0xc) =
           (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
      if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
        if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066ce00;
      }
      else {
        FUN_00671963();
        dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066ce00:
        *(undefined4 *)(unaff_EBP + -0xd8) = 0;
        *(uint *)(unaff_EBP + -0xdc) = uVar3 % 10000000;
        dVar2 = (double)*(longlong *)(unaff_EBP + -0xdc) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
                _DAT_008ed7a0 + dVar2;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x30);
      dVar2 = ((double)*(int *)(unaff_EBP + -0x10) + dVar2) * (double)*(int *)(unaff_EBP + 0xc) *
              _DAT_008ed770;
      goto LAB_0066d9fd;
    }
    iVar8 = FUN_00670522();
    if (((iVar8 == 0) && (iVar8 = *(int *)(unaff_EBP + 0x2c), iVar8 != 0x5d)) &&
       ((iVar8 != 0x5e &&
        ((((pcVar14 != ptr_004f5c6a && (pcVar14 != (code *)0x4faa8b)) &&
          (pcVar14 != (code *)0x4faa8f)) && (pcVar14 != (code *)0x4faa90)))))) {
      if ((iVar8 == 0x4d) || (iVar8 == 0x4c)) {
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
        *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
        iVar9 = unaff_ESI + 0x30;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066cd15;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066cd15:
          *(undefined4 *)(unaff_EBP + -0x178) = 0;
          *(uint *)(unaff_EBP + -0x17c) = *(uint *)(unaff_EBP + -0x18) % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0x17c) *
                  (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ea340 + (double)*(int *)(unaff_EBP + -0x30);
        goto LAB_0066dcb9;
      }
      uVar5 = FUN_00413367();
      uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
      *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
      iVar9 = unaff_ESI + 0x30;
      uVar5 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
      iVar8 = *(int *)(unaff_EBP + -4);
      uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
      uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
      dVar2 = (double)*(int *)(unaff_EBP + -0x10);
      *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
      *(double *)(unaff_EBP + -0xc) =
           (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
      if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
        if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066cc6f;
      }
      else {
        FUN_00671963();
        dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066cc6f:
        *(undefined4 *)(unaff_EBP + -200) = 0;
        *(uint *)(unaff_EBP + -0xcc) = *(uint *)(unaff_EBP + -0x18) % 10000000;
        dVar2 = (double)*(longlong *)(unaff_EBP + -0xcc) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
                _DAT_008ed7a0 + dVar2;
      }
      dVar4 = (double)*(int *)(unaff_EBP + -0x30);
      goto LAB_0066cef6;
    }
LAB_0066ce4b:
    if (*(int *)(unaff_EBP + 0x2c) != 0x20) {
      if (((4 < *(int *)(unaff_EBP + 0x2c)) && (*(int *)(unaff_EBP + 0x2c) < 0x10)) ||
         (bVar11 = false, *(int *)(unaff_EBP + -0x30) != 0)) {
        bVar11 = true;
      }
      switch(*(undefined4 *)(unaff_EBP + -0x48)) {
      case 0x1e:
      case 0x21:
        iVar8 = FUN_00413367();
        if ((iVar8 / 100 == 4) && (*(int *)(unaff_EBP + -0x48) == 0x21)) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
          iVar8 = unaff_ESI + 0x24;
          uVar7 = FUN_00413367();
          uVar5 = *(undefined4 *)(unaff_ESI + 0x50);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
          uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar5,iVar8,uVar6);
          *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar6 = *(undefined4 *)(unaff_ESI + 0x50);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d6b2;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d6b2:
            *(undefined4 *)(unaff_EBP + -0xd0) = 0;
            *(uint *)(unaff_EBP + -0xd4) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0xd4) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x30);
          iVar8 = *(int *)(unaff_EBP + -0x10);
          goto LAB_0066d9ea;
        }
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x24;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d764;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d764:
          *(undefined4 *)(unaff_EBP + -0xe0) = 0;
          *(uint *)(unaff_EBP + -0xe4) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0xe4) * (*(double *)(unaff_EBP + -0xc) - dVar2)
                  * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ed758 + (double)*(int *)(unaff_EBP + -0x18);
        break;
      case 0x1f:
      case 0x20:
      case 0x25:
      case 0x26:
        if (bVar11 == false) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d5cf;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d5cf:
            *(undefined4 *)(unaff_EBP + -0xc0) = 0;
            *(uint *)(unaff_EBP + -0xc4) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0xc4) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed740 + (double)*(int *)(unaff_EBP + -0x18);
        }
        else {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d529;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d529:
            *(undefined4 *)(unaff_EBP + -0xb0) = 0;
            *(uint *)(unaff_EBP + -0xb4) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0xb4) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed748 + (double)*(int *)(unaff_EBP + -0x18);
        }
        break;
      default:
        goto switchD_0066cf2b_caseD_22;
      case 0x27:
        iVar8 = FUN_00413367();
        if (iVar8 == 500) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066db30;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066db30:
            *(undefined4 *)(unaff_EBP + -0x130) = 0;
            *(uint *)(unaff_EBP + -0x134) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x134) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ea308 + (double)*(int *)(unaff_EBP + -0x18);
        }
        else {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066dbd6;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066dbd6:
            *(undefined4 *)(unaff_EBP + -0x140) = 0;
            *(uint *)(unaff_EBP + -0x144) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x144) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed730 + (double)*(int *)(unaff_EBP + -0x18);
        }
        break;
      case 0x28:
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x24;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d474;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d474:
          *(undefined4 *)(unaff_EBP + -0xa0) = 0;
          *(uint *)(unaff_EBP + -0xa4) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0xa4) * (*(double *)(unaff_EBP + -0xc) - dVar2)
                  * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ed750 + (double)*(int *)(unaff_EBP + -0x18);
        break;
      case 0x29:
      case 0x2a:
        if (bVar11 == false) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d1ac;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d1ac:
            *(undefined4 *)(unaff_EBP + -0x148) = 0;
            *(uint *)(unaff_EBP + -0x14c) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x14c) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed778 + (double)*(int *)(unaff_EBP + -0x18);
        }
        else {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d106;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d106:
            *(undefined4 *)(unaff_EBP + -0xf8) = 0;
            *(uint *)(unaff_EBP + -0xfc) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0xfc) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed760 + (double)*(int *)(unaff_EBP + -0x18);
        }
        break;
      case 0x2b:
      case 0x2c:
        if (*(int *)(unaff_EBP + -0x24) == 0x14011e) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d266;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d266:
            *(undefined4 *)(unaff_EBP + -0x108) = 0;
            *(uint *)(unaff_EBP + -0x10c) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x10c) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ed758 + (double)*(int *)(unaff_EBP + -0x18);
        }
        else if ((*(int *)(unaff_EBP + -0x48) == 0x2b) == bVar11) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d3c7;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d3c7:
            *(undefined4 *)(unaff_EBP + -0x90) = 0;
            *(uint *)(unaff_EBP + -0x94) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x94) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ea308 + (double)*(int *)(unaff_EBP + -0x18);
        }
        else {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          iVar9 = unaff_ESI + 0x24;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d324;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d324:
            *(undefined4 *)(unaff_EBP + -0x80) = 0;
            *(uint *)(unaff_EBP + -0x84) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x84) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ecb30 + (double)*(int *)(unaff_EBP + -0x18);
        }
        break;
      case 0x2d:
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x30;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066cfa4;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066cfa4:
          *(undefined4 *)(unaff_EBP + -0xe8) = 0;
          *(uint *)(unaff_EBP + -0xec) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0xec) * (*(double *)(unaff_EBP + -0xc) - dVar2)
                  * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ed778 + (double)*(int *)(unaff_EBP + -0x18);
        break;
      case 0x2e:
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x30;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d051;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d051:
          *(undefined4 *)(unaff_EBP + -0x168) = 0;
          *(uint *)(unaff_EBP + -0x16c) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0x16c) *
                  (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ed768 + (double)*(int *)(unaff_EBP + -0x18);
        break;
      case 0x2f:
        if ((*(int *)(unaff_EBP + -0x24) == 0x3d0e40) || (*(int *)(unaff_EBP + -0x24) == 0x3ee1af))
        {
          uVar6 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
          iVar8 = *(int *)(unaff_EBP + -4);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) = (double)*(int *)(unaff_EBP + -0x28) * _DAT_008e89d0;
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066da6d;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066da6d:
            *(undefined4 *)(unaff_EBP + -0x120) = 0;
            *(uint *)(unaff_EBP + -0x124) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x124) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          dVar2 = dVar2 * _DAT_008ecb30;
          break;
        }
        if (*(int *)(unaff_EBP + -0x24) != 0x3eba9c) {
          uVar5 = FUN_00413367();
          uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
          iVar8 = unaff_ESI + 0x24;
          uVar7 = FUN_00413367();
          uVar5 = *(undefined4 *)(unaff_ESI + 0x50);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
          uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar5,iVar8,uVar6);
          *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
          iVar8 = *(int *)(unaff_EBP + -4);
          uVar6 = *(undefined4 *)(unaff_ESI + 0x50);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
          uVar6 = FUN_00413367(unaff_ESI + 0x48,uVar6);
          *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
          dVar2 = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0xc) =
               (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
          if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
            if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d9af;
          }
          else {
            FUN_00671963();
            dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066d9af:
            *(undefined4 *)(unaff_EBP + -0x110) = 0;
            *(uint *)(unaff_EBP + -0x114) = uVar3 % 10000000;
            dVar2 = (double)*(longlong *)(unaff_EBP + -0x114) *
                    (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x30);
          iVar8 = *(int *)(unaff_EBP + -0x10);
LAB_0066d9ea:
          dVar2 = (dVar2 * _DAT_008ed768 + (double)iVar8) * (double)*(int *)(unaff_EBP + 0xc) *
                  _DAT_008e8cd0;
          goto LAB_0066d9fd;
        }
        FUN_006509a1();
        uVar6 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        *(double *)(unaff_EBP + -0xc) = (double)*(int *)(unaff_EBP + -0x10) * _DAT_008ed708;
        uVar6 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        iVar8 = *(int *)(unaff_EBP + -4);
        dVar2 = (double)*(int *)(unaff_EBP + -0x10) * _DAT_008e89d0;
        *(double *)(unaff_EBP + -0x14) = dVar2;
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066d848;
        }
        else {
          FUN_00671963();
LAB_0066d848:
          *(undefined4 *)(unaff_EBP + -0xf0) = 0;
          *(uint *)(unaff_EBP + -0xf4) = uVar3 % 10000000;
        }
        iVar8 = __ftol();
        *(int *)(unaff_EBP + -0x10) = iVar8 * 10;
        iVar8 = *(int *)(unaff_EBP + -4);
        *(double *)(unaff_EBP + -0x20) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = _DAT_008e9978;
        *(undefined8 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x100) = 0;
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        *(uint *)(unaff_EBP + -0x104) = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4) % 10000000;
        *(double *)(unaff_EBP + -0xc) = (double)*(longlong *)(unaff_EBP + -0x104) * _DAT_008ed738;
        uVar6 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        if (*(double *)(unaff_EBP + -0xc) < (double)*(int *)(unaff_EBP + -0x10)) {
          iVar8 = FUN_00413367();
          *(int *)(unaff_EBP + -0x10) = iVar8 + 100;
          iVar8 = *(int *)(unaff_EBP + -0x10);
          dVar2 = *(double *)(unaff_EBP + -0x20);
          *(undefined4 *)(*(int *)(unaff_EBP + 0x40) + *(int *)(unaff_EBP + 0x20) * 4) = 1;
          *(double *)(unaff_EBP + -0x20) = (double)iVar8 * dVar2 * _DAT_008e8cd0;
        }
        goto switchD_0066cf2b_caseD_22;
      case 0x30:
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x24;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066dc83;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066dc83:
          *(undefined4 *)(unaff_EBP + -0x150) = 0;
          *(uint *)(unaff_EBP + -0x154) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0x154) *
                  (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
        }
        dVar2 = dVar2 * _DAT_008ed760 + (double)*(int *)(unaff_EBP + -0x18);
        break;
      case 0x31:
        uVar5 = FUN_00413367();
        uVar6 = *(undefined4 *)(unaff_ESI + 0x38);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        iVar9 = unaff_ESI + 0x30;
        uVar5 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
        iVar8 = *(int *)(unaff_EBP + -4);
        uVar5 = *(undefined4 *)(unaff_ESI + 0x38);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar3 = *(uint *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
        uVar6 = FUN_00413367(unaff_ESI + 0x30,uVar5,iVar9,uVar6);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        dVar2 = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
        *(double *)(unaff_EBP + -0xc) =
             (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
        if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
          if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066dd39;
        }
        else {
          FUN_00671963();
          dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066dd39:
          *(undefined4 *)(unaff_EBP + -0x160) = 0;
          *(uint *)(unaff_EBP + -0x164) = uVar3 % 10000000;
          dVar2 = (double)*(longlong *)(unaff_EBP + -0x164) *
                  (*(double *)(unaff_EBP + -0xc) - dVar2) * _DAT_008ed7a0 + dVar2;
        }
        *(double *)(unaff_EBP + -0x20) =
             (dVar2 * _DAT_008ed768 + (double)*(int *)(unaff_EBP + -0x18)) *
             (double)*(int *)(unaff_EBP + 0xc) * _DAT_008e8cd0;
        if (*(int *)(unaff_EBP + -0x24) == 0x4f837c) {
          if (*(int *)(unaff_EBP + 0x24) / 1000 == 0x91b) goto switchD_0066cf2b_caseD_22;
          *(double *)(unaff_EBP + -0x20) = *(double *)(unaff_EBP + -0x20) * _DAT_008e89d0;
        }
        if ((*(int *)(unaff_EBP + -0x24) != 0x4f837d) ||
           (*(int *)(unaff_EBP + 0x24) / 1000 == 0x91c)) goto switchD_0066cf2b_caseD_22;
        dVar2 = *(double *)(unaff_EBP + -0x20) * _DAT_008e89d0;
        goto LAB_0066ddc6;
      }
LAB_0066dcb9:
      dVar2 = dVar2 * (double)*(int *)(unaff_EBP + 0xc) * _DAT_008e8cd0;
      goto LAB_0066ddc6;
    }
    uVar5 = FUN_00413367();
    uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
    *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
    iVar9 = unaff_ESI + 0x24;
    uVar5 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
    iVar8 = *(int *)(unaff_EBP + -4);
    uVar5 = *(undefined4 *)(unaff_ESI + 0x2c);
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x68 + (iVar8 % 7) * 4);
    uVar6 = FUN_00413367(unaff_ESI + 0x24,uVar5,iVar9,uVar6);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
    dVar2 = (double)*(int *)(unaff_EBP + -0x10);
    *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
    *(double *)(unaff_EBP + -0xc) =
         (double)*(int *)(unaff_EBP + -0x28) * *(double *)(unaff_EBP + -0x38);
    if (dVar2 <= *(double *)(unaff_EBP + -0xc)) {
      if (dVar2 != *(double *)(unaff_EBP + -0xc)) goto LAB_0066ceca;
    }
    else {
      FUN_00671963();
      dVar2 = *(double *)(unaff_EBP + -0x14);
LAB_0066ceca:
      *(undefined4 *)(unaff_EBP + -0x138) = 0;
      *(uint *)(unaff_EBP + -0x13c) = *(uint *)(unaff_EBP + -0x18) % 10000000;
      dVar2 = (double)*(longlong *)(unaff_EBP + -0x13c) * (*(double *)(unaff_EBP + -0xc) - dVar2) *
              _DAT_008ed7a0 + dVar2;
    }
    dVar4 = (double)*(int *)(unaff_EBP + -0x30);
  }
LAB_0066cef6:
  dVar2 = (dVar4 + dVar2) * (double)*(int *)(unaff_EBP + 0xc) * _DAT_008ecdf8;
LAB_0066d9fd:
  *(double *)(unaff_EBP + -0x20) = dVar2;
  goto switchD_0066cf2b_caseD_22;
code_r0x0066c7d8:
  uVar6 = FUN_00413367();
  goto LAB_0066e312;
}


