/* FUN_0084c1cb - 0x0084c1cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_0084c1cb(void)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  uint auStack_64 [5];
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  auStack_64[4] = 0x84c1ec;
  uVar1 = FUN_0042452b();
  iVar6 = DAT_00979268;
  switch(uVar1) {
  case 7:
    auStack_64[4] = 1;
    auStack_64[3] = *(undefined4 *)(extraout_ECX + 0x32a0);
    auStack_64[2] = *(undefined4 *)(extraout_ECX + 0x329c);
    auStack_64[1] = 0x84c217;
    FUN_00844bd8();
    goto switchD_0084c1fb_caseD_c;
  case 8:
    auStack_64[4] = 0x84c237;
    uVar5 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    auStack_64[4] = 0x84c241;
    auStack_64[4] = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    auStack_64[4] = auStack_64[4] & 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    auStack_64[3] = 0x84c25c;
    auStack_64[3] = FUN_004ec897();
    auStack_64[4] = 0xffffffff;
    auStack_64[2] = 0x84c267;
    FUN_00414edd();
    auStack_64[4] = 0;
    auStack_64[3] = unaff_EBP + 8;
    auStack_64[2] = unaff_EBP + -0x14;
    auStack_64[0] = unaff_EBP - 0x10;
    *(uint **)(unaff_EBP + -0x40) = auStack_64 + 1;
    FUN_00450368();
    auStack_64[0] = 0x84c284;
    FUN_007d3411();
    auStack_64[4] = 1;
    auStack_64[3] = 1;
    auStack_64[2] = 0;
    auStack_64[1] = 0;
    auStack_64[0] = 0xd49;
    FUN_00679d22(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    auStack_64[0] = 0x84c2ae;
    uVar5 = FUN_00483ba7();
    auStack_64[0] = *(uint *)(unaff_EBP + -0x18) % 100;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar4 = FUN_00449713(*(undefined4 *)(unaff_EBP + 8));
    uVar5 = FUN_00434e21(uVar5,uVar4);
    *(uint **)(unaff_EBP + -0x40) = auStack_64;
    FUN_00450368(uVar5);
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    auStack_64[4] = 0x84c2f2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    auStack_64[4] = 0x84c2fe;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    auStack_64[4] = 0x84c30a;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    auStack_64[4] = 0x84c315;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0084c641;
  case 9:
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    *(uint **)(unaff_EBP + 8) = auStack_64;
    uVar5 = 0xd4e;
    break;
  case 10:
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    *(uint **)(unaff_EBP + 8) = auStack_64;
    uVar5 = 0xd4b;
    break;
  case 0xb:
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    *(uint **)(unaff_EBP + 8) = auStack_64;
    uVar5 = 0xd4c;
    break;
  default:
    goto switchD_0084c1fb_caseD_c;
  case 0xd:
    auStack_64[4] = 0x84c522;
    uVar5 = FUN_0042459a();
    *(undefined4 *)(iVar6 + 0x630) = uVar5;
    goto switchD_0084c1fb_caseD_c;
  case 0xe:
    auStack_64[4] = 0x84c534;
    cVar3 = FUN_0042452b();
    if (cVar3 == '\0') {
      auStack_64[4] = 0xb1;
      auStack_64[3] = unaff_EBP + -0x3c;
      auStack_64[2] = 0x84c59f;
      puVar7 = (undefined4 *)FUN_00679d22();
      auStack_64[3] = *puVar7;
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      auStack_64[4] = 0xc;
      auStack_64[2] = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      auStack_64[1] = 0x84c5bb;
      auStack_64[3] = FUN_00434e21();
      auStack_64[2] = 0x84c5c3;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      auStack_64[4] = 0x84c5d1;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      auStack_64[4] = 0xb0;
      auStack_64[3] = unaff_EBP + -0x38;
      auStack_64[2] = 0x84c54e;
      puVar7 = (undefined4 *)FUN_00679d22();
      auStack_64[3] = *puVar7;
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      auStack_64[4] = 0xc;
      auStack_64[2] = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      auStack_64[1] = 0x84c56a;
      auStack_64[3] = FUN_00434e21();
      auStack_64[2] = 0x84c572;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      auStack_64[4] = 0x84c580;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    goto LAB_0084c641;
  case 0xf:
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    *(uint **)(unaff_EBP + 8) = auStack_64;
    uVar5 = 0xd63;
    break;
  case 0x10:
    auStack_64[4] = 0x84c328;
    FUN_0042459a();
    auStack_64[4] = 0x84c32f;
    bVar2 = FUN_0042452b();
    if (((bVar2 == 0xfe) || (bVar2 == 0xfd)) || (bVar2 == 0xff)) {
      auStack_64[4] = 1;
      auStack_64[3] = 1;
      *(uint **)(unaff_EBP + 8) = auStack_64;
      uVar5 = 0xd43;
      break;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    auStack_64[3] = 0x84c366;
    auStack_64[4] = (uint)bVar2;
    auStack_64[3] = FUN_004ec897();
    auStack_64[4] = 0xffffffff;
    auStack_64[2] = 0x84c371;
    FUN_00414edd();
    auStack_64[4] = 0;
    auStack_64[3] = unaff_EBP + -0x10;
    auStack_64[2] = unaff_EBP + -0x18;
    auStack_64[0] = unaff_EBP - 0x14;
    *(uint **)(unaff_EBP + 8) = auStack_64 + 1;
    FUN_00450368();
    auStack_64[0] = 0x84c38e;
    FUN_007d3411();
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    auStack_64[2] = 0;
    auStack_64[1] = 0;
    auStack_64[0] = 0xd4a;
    FUN_00679d22(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    auStack_64[0] = 0x84c3b6;
    uVar5 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + 8) = uVar5;
    auStack_64[0] = *(uint *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uVar5 = FUN_00449713();
    uVar5 = FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar5);
    *(uint **)(unaff_EBP + 8) = auStack_64;
    FUN_00450368(uVar5);
    iVar6 = FUN_007db791();
    *(bool *)(unaff_EBP + 0xb) = iVar6 == 6;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    auStack_64[4] = 0x84c3f8;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    auStack_64[4] = 0x84c404;
    FUN_00414ebb();
    if (*(char *)(unaff_EBP + 0xb) != '\0') {
      auStack_64[3] = 0x84c40f;
      auStack_64[4] = (uint)bVar2;
      FUN_00429303();
      auStack_64[3] = 0x84c416;
      FUN_004ea461();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    auStack_64[4] = 0x84c422;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    auStack_64[4] = 0x84c42e;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0084c641;
  case 0x11:
    auStack_64[4] = 0x84c457;
    uVar5 = FUN_0042459a();
    auStack_64[4] = 0;
    auStack_64[3] = 0;
    auStack_64[2] = 0;
    auStack_64[1] = 0;
    if (*(int *)(DAT_00978358 + 0x528) < 1) {
      *(uint **)(unaff_EBP + 8) = auStack_64;
      FUN_00679d22(auStack_64,0xd45);
      iVar6 = FUN_007db791();
      if (iVar6 == 6) {
        auStack_64[4] = 0;
        auStack_64[3] = 0;
        auStack_64[2] = 0x6f;
        auStack_64[1] = 0x84c4aa;
        FUN_0060142b();
        auStack_64[4] = 4;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        auStack_64[3] = 0x84c4bb;
        FUN_00457cda();
        auStack_64[3] = 0x84c4c4;
        auStack_64[4] = uVar5;
        FUN_00457d37();
        auStack_64[4] = 0;
        auStack_64[3] = 0x84c4cd;
        FUN_00457cda();
        auStack_64[4] = unaff_EBP + -0x50;
        auStack_64[3] = 0x84c4dc;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        auStack_64[4] = 0x84c4e8;
        FUN_0045ebca();
      }
      goto switchD_0084c1fb_caseD_c;
    }
    *(uint **)(unaff_EBP + 8) = auStack_64;
    uVar5 = 0x117;
    break;
  case 0x12:
    auStack_64[4] = 0x84c605;
    cVar3 = FUN_0042452b();
    if (cVar3 == '\0') goto switchD_0084c1fb_caseD_c;
    auStack_64[4] = unaff_EBP + -0x24;
    auStack_64[3] = 0x84c617;
    FUN_0045cdbc();
    auStack_64[4] = 0;
    auStack_64[3] = 1;
    auStack_64[2] = 0;
    auStack_64[1] = 0;
    *(uint **)(unaff_EBP + 8) = auStack_64;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    auStack_64[0] = extraout_ECX_00;
    FUN_00450368(unaff_EBP + -0x24);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0084c641:
    auStack_64[4] = 0x84c646;
    FUN_00414ebb();
    goto switchD_0084c1fb_caseD_c;
  }
  auStack_64[2] = 0;
  auStack_64[1] = 0;
  FUN_00679d22(auStack_64,uVar5);
  FUN_007db3ad();
switchD_0084c1fb_caseD_c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


