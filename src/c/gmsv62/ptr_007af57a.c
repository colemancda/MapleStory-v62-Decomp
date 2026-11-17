/* ptr_007af57a - 0x007af57a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007af57a(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  
  FUN_00879bb8();
  pcStack_24 = (code *)0x7af594;
  uVar2 = FUN_0042452b();
  pcVar5 = (char *)(uVar2 & 0xff);
  *(char **)(unaff_EBP + -0x10) = pcVar5;
  if ((char *)0x3 < pcVar5) goto LAB_007af973;
  if (pcVar5 == (char *)0x3) {
    pcStack_24 = FUN_00414ebb;
    pcStack_28 = FUN_00483ba7;
    uStack_2c = 2;
    FUN_0087b2f0(unaff_EBP + -0x18,4);
    pcStack_24 = (code *)0x188;
    pcStack_28 = (code *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_2c = 0x7af5e2;
    pcStack_24 = (code *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pcStack_28 = (code *)0x7af5ef;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      pcStack_24 = (code *)(*(int *)(unaff_EBP + 8) + -0xc);
      pcStack_28 = (code *)0x7af602;
      FUN_00434e38();
    }
    pcStack_24 = (code *)0x189;
    pcStack_28 = (code *)(unaff_EBP + 8);
    uStack_2c = 0x7af613;
    pcStack_24 = (code *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    pcStack_28 = (code *)0x7af620;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      pcStack_24 = (code *)(*(int *)(unaff_EBP + 8) + -0xc);
      pcStack_28 = (code *)0x7af633;
      FUN_00434e38();
    }
    iVar4 = 0;
    iVar6 = unaff_EBP + -0x18;
    do {
      if (1 < iVar4) break;
      pcStack_24 = (code *)0x69c;
      pcStack_28 = (code *)0x7af651;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        pcStack_24 = (code *)0x7af663;
        iVar3 = FUN_007e62e9();
      }
      uVar2 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar2 != 0) & uVar2 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pcStack_24 = (code *)0x7af689;
      FUN_004c26c4();
      pcStack_24 = (code *)0x0;
      pcStack_28 = (code *)0x0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00450368(iVar6);
      uVar8 = 0xf7125;
      uVar7 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004c2677(0,0xf7125);
      FUN_007eddac(uVar7,uVar8);
      pcStack_24 = (code *)(uint)(iVar4 < 1);
      pcStack_28 = (code *)(uint)(0 < iVar4);
      uStack_2c = 0x7af6cd;
      FUN_007edf11();
      pcStack_24 = (code *)0x7af6d5;
      FUN_007e6e3c();
      pcStack_24 = (code *)0x7af6dd;
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 0x2000) {
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + -4;
      }
      else {
        if (iVar3 != 0x2001) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          pcStack_24 = (code *)0x7af711;
          FUN_004c26e1();
          break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pcStack_24 = (code *)0x7af6fc;
      FUN_004c26e1();
    } while (-1 < iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_24 = FUN_00414ebb;
    pcStack_28 = (code *)0x2;
    uStack_2c = 4;
    FUN_0087a0b8(unaff_EBP + -0x18);
    goto LAB_007af973;
  }
  pcStack_24 = (code *)0x7af734;
  cVar1 = FUN_0042452b();
  pcStack_28 = (code *)pcVar5;
  if (cVar1 == '\0') {
    pcStack_24 = (code *)0x0;
    uStack_2c = 0x7af7cb;
    FUN_0078bf44();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    pcStack_24 = (code *)0x7af7dd;
    cVar1 = FUN_0042452b();
    if (cVar1 == '\x01') {
      pcStack_24 = (code *)0x18d;
      pcStack_28 = (code *)(unaff_EBP + -0x1c);
      uStack_2c = 0x7af836;
      pcStack_24 = (code *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      pcStack_28 = (code *)0x7af843;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 7;
LAB_007af84a:
      pcStack_24 = (code *)0x7af84f;
      FUN_00414ebb();
    }
    else {
      if (cVar1 == '\x02') {
        pcStack_24 = (code *)0x18e;
        pcStack_28 = (code *)(unaff_EBP + 8);
        uStack_2c = 0x7af80d;
        pcStack_24 = (code *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pcStack_28 = (code *)0x7af81a;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        goto LAB_007af84a;
      }
      if (cVar1 == '\x03') {
        pcStack_24 = (code *)0xffffffff;
        pcStack_28 = (code *)s_You_cannot_use_pet_here__0096c118;
        uStack_2c = 0x7af7f8;
        FUN_00414edd();
      }
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    if (iVar6 != 0) {
      pcStack_28 = (code *)(unaff_EBP - 0x10);
      pcStack_24 = (code *)0xc;
      uStack_2c = 0x7af86c;
      FUN_00471102();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_24 = (code *)0x7af87a;
    FUN_00414ebb();
  }
  else {
    pcStack_24 = (code *)0x7af744;
    cVar1 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x1c) = (uint)(cVar1 != '\0');
    if ((cVar1 != '\0') != 0) {
      pcStack_24 = (code *)0x0;
      uStack_2c = 0x7af758;
      FUN_0078bf44();
    }
    pcStack_24 = (code *)0x1c8;
    pcStack_28 = (code *)0x7af767;
    iVar6 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar6;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (iVar6 == 0) {
      pcStack_24 = (code *)0x0;
    }
    else {
      pcStack_24 = (code *)0x7af77c;
      pcStack_24 = (code *)FUN_0079518d();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_2c = 0x7af78d;
    pcStack_28 = (code *)pcVar5;
    FUN_0078bf44();
    pcStack_24 = *(code **)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) << 3;
    uStack_2c = 0x7af7af;
    FUN_00613989();
    pcStack_24 = (code *)0x7af7bd;
    FUN_0061636f();
  }
  pcStack_24 = (code *)0x1;
  pcStack_28 = (code *)0x7af884;
  FUN_0043f1a0();
  iVar6 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4);
  if (iVar6 != 0) {
    pcStack_24 = *(code **)(iVar6 + 0x15c);
    pcStack_28 = (code *)(iVar6 + 0x154);
    uStack_2c = 0x7af8a6;
    iVar6 = FUN_004cd670();
    if ((iVar6 != 0) && (DAT_00979198 != 0)) {
      if (DAT_00979110 == 0) {
        uStack_2c = 0;
      }
      else {
        uStack_2c = *(undefined4 *)(DAT_00979110 + 0x380);
      }
      pcStack_24 = (code *)0x0;
      pcStack_28 = (code *)0x0;
      FUN_006b18ed();
    }
    iVar6 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4);
    pcStack_24 = *(code **)(iVar6 + 0x168);
    pcStack_28 = (code *)(iVar6 + 0x160);
    uStack_2c = 0x7af8eb;
    iVar6 = FUN_004cd670();
    if ((iVar6 != 0) && (DAT_00979198 != 0)) {
      if (DAT_00979110 == 0) {
        uStack_2c = 0;
      }
      else {
        uStack_2c = *(undefined4 *)(DAT_00979110 + 900);
      }
      pcStack_24 = (code *)0x0;
      pcStack_28 = (code *)0x0;
      FUN_006b1dec();
    }
  }
  iVar6 = *(int *)(extraout_ECX + 0x1744);
  if (*(int *)(iVar6 + 0x14) == 0) {
    if (*(int *)(iVar6 + 0xc) == 0) {
      if (*(int *)(iVar6 + 4) == 0) goto LAB_007af973;
      pcStack_24 = (code *)0x0;
    }
    else {
      pcStack_24 = (code *)0x1;
      pcStack_28 = (code *)0x7af957;
      FUN_00615182();
      pcStack_24 = (code *)0x2;
    }
  }
  else {
    pcStack_24 = (code *)0x5;
    pcStack_28 = (code *)0x7af92b;
    FUN_00615182();
    pcStack_24 = (code *)0x3;
    pcStack_28 = (code *)0x7af93b;
    FUN_00615182();
    pcStack_24 = (code *)0x4;
  }
  pcStack_28 = (code *)0x7af973;
  FUN_00615182();
LAB_007af973:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


