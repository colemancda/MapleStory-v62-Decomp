/* FUN_5180f537 - 0x5180f537 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180f537(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int unaff_EBP;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_5180ea30();
  pvVar1 = *(void **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  bVar3 = FUN_5180950d(pvVar1,(wchar_t *)&DAT_5181f5bc);
  if ((((bVar3) || (bVar3 = FUN_5180950d(pvVar1,(wchar_t *)&DAT_5181f5b4), bVar3)) ||
      (bVar3 = FUN_5180950d(pvVar1,(wchar_t *)&DAT_5181f5ac), bVar3)) ||
     (bVar3 = FUN_5180950d(pvVar1,(wchar_t *)&DAT_5181f5a4), bVar3)) {
    uVar5 = uRam00000000;
    if (unaff_EBP != -8) {
      uVar5 = *(uint *)(*(int *)(unaff_EBP + 0x10) + 0xc);
    }
    puVar9 = *(uint **)(*(int *)(unaff_EBP + 0x10) + 8);
    *(uint **)(unaff_EBP + -0x14) = puVar9;
    puVar4 = (uint *)(uVar5 + (int)puVar9);
    if (((0x7f < uVar5) && ((char)puVar4[-0x20] == 'T')) &&
       ((*(char *)((int)puVar4 + -0x7f) == 'A' && (*(char *)((int)puVar4 + -0x7e) == 'G')))) {
      puVar4 = puVar4 + -0x20;
    }
    for (; (puVar9 < (uint *)((int)puVar4 - 1U) &&
           (((char)*puVar9 != -1 || ((*puVar9 & 0xe000) != 0xe000))));
        puVar9 = (uint *)((int)puVar9 + 1)) {
    }
    if (puVar9 < puVar4) {
      *(uint **)(unaff_EBP + 0xc) = puVar4;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) - (int)puVar9;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_51807cf2(unaff_EBP + -0x1c);
      puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
      *puVar2 = DAT_51819ee0;
      puVar2[1] = DAT_51819ee4;
      puVar2[2] = DAT_51819ee8;
      puVar2[3] = DAT_51819eec;
      iVar8 = *(int *)(unaff_EBP + -0x18);
      *(undefined4 *)(iVar8 + 0x10) = DAT_51819e70;
      *(undefined4 *)(iVar8 + 0x14) = DAT_51819e74;
      *(undefined4 *)(iVar8 + 0x18) = DAT_51819e78;
      *(undefined4 *)(iVar8 + 0x1c) = DAT_51819e7c;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x20) = 1;
      uVar5 = *puVar9;
      pvVar1 = *(void **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uVar5 = FUN_518094e6(uVar5);
      puVar6 = (undefined2 *)FUN_51809499(pvVar1,(undefined4 *)&DAT_51819dd0,0x1e);
      FUN_5180edfa(puVar6,uVar5);
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x44);
      uVar15 = 5;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      iVar7 = FUN_51804b19();
      iVar7 = acmStreamOpen(0,0,iVar8,iVar7 + 0x1c,uVar12,uVar13,uVar14,uVar15);
      if (iVar7 == 0) {
        lVar10 = __allmul(*(uint *)(unaff_EBP + 0xc),0,1000,0);
        uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),*(uint *)(iVar8 + 8),0);
        uVar12 = *(undefined4 *)(unaff_EBP + 0xc);
        iVar8 = *(int *)(unaff_EBP + -0x14);
        **(undefined4 **)(unaff_EBP + 0x14) = (int)uVar11;
        FUN_51805b5f(*(void **)(unaff_EBP + 0x10),(int)puVar9 - iVar8,uVar12);
        iVar8 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(unaff_EBP + -0x18);
        FUN_51810353(iVar8);
      }
      else {
        iVar8 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar8 + 4) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_51813012(unaff_EBP + -0x1c);
      }
    }
    else {
      iVar8 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar8 + 4) = 0;
    }
  }
  else {
    iVar8 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar8;
}


