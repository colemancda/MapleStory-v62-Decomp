/* FUN_10004bc0 - 0x10004bc0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl FUN_10004bc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
     (puVar1 = (undefined4 *)param_2[7], puVar1 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  puVar2 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x16b8);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  param_1[7] = puVar2;
  puVar8 = puVar1;
  puVar9 = puVar2;
  for (iVar4 = 0x5ae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *puVar2 = param_1;
  uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[9],2);
  puVar2[0xc] = uVar3;
  uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[9],2);
  puVar2[0xe] = uVar3;
  uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[0x11],2);
  puVar2[0xf] = uVar3;
  iVar4 = (*(code *)param_1[8])(param_1[10],puVar2[0x5a5],4);
  puVar2[2] = iVar4;
  if ((((undefined4 *)puVar2[0xc] != (undefined4 *)0x0) && (puVar2[0xe] != 0)) &&
     ((puVar2[0xf] != 0 && (iVar4 != 0)))) {
    uVar7 = puVar2[9];
    puVar8 = (undefined4 *)puVar1[0xc];
    puVar9 = (undefined4 *)puVar2[0xc];
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = puVar2[9];
    puVar8 = (undefined4 *)puVar1[0xe];
    puVar9 = (undefined4 *)puVar2[0xe];
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = puVar2[0x11];
    puVar8 = (undefined4 *)puVar1[0xf];
    puVar9 = (undefined4 *)puVar2[0xf];
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = puVar2[3];
    puVar8 = (undefined4 *)puVar1[2];
    puVar9 = (undefined4 *)puVar2[2];
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar2[4] = (puVar1[4] - puVar1[2]) + puVar2[2];
    uVar7 = puVar2[0x5a5];
    puVar2[0x5a7] = iVar4 + (uVar7 & 0xfffffffe);
    puVar2[0x5a4] = uVar7 + puVar2[2] + uVar7 * 2;
    puVar2[0x2c4] = puVar2 + 0x23;
    puVar2[0x2c7] = puVar2 + 0x260;
    puVar2[0x2ca] = puVar2 + 0x29d;
    return 0;
  }
  FUN_10004b10((int)param_1);
  return 0xfffffffc;
}


