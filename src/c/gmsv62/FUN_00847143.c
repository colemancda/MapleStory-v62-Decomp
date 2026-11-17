/* FUN_00847143 - 0x00847143 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00847143(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar2 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_0097926c;
  if (cVar1 == '\0') {
    FUN_00455c59(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iVar3 = FUN_005ee726(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e4a2();
    if (iVar3 != 0) {
      FUN_00455c59(unaff_EBP + -0x54);
      *(undefined4 *)(unaff_EBP + -4) = 7;
      FUN_004b8255(*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e4a2();
    }
    FUN_00455c59(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -4) = 8;
    iVar3 = FUN_005ee6cd(unaff_EBP + 8,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e4a2();
    if (iVar3 != 0) {
      FUN_00455c59(unaff_EBP + -100);
      *(undefined4 *)(unaff_EBP + -4) = 9;
      FUN_0084efc9(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e4a2();
    }
    if (DAT_0097bdc4 != 0) {
      for (uVar5 = 0;
          (iVar3 = *(int *)(DAT_0097bdc4 + 0x578), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)));
          uVar5 = uVar5 + 1) {
        if (*(uint *)(iVar3 + uVar5 * 4) == (uint)*(ushort *)(unaff_EBP + 8)) goto LAB_008474d4;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_0045cdbc(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_006fcb31(*(undefined4 *)(unaff_EBP + 8));
      if (iVar3 == 0) {
        bVar6 = true;
      }
      else {
        iVar3 = FUN_00455c59(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
        uVar2 = *(undefined4 *)(iVar3 + 4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar3 = FUN_006fcb31(*(undefined4 *)(unaff_EBP + 8));
        iVar3 = FUN_0062dfd9(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(iVar3 + 0x18),uVar2);
        bVar6 = iVar3 == 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
        FUN_0045e4a2();
      }
      FUN_00455c59(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004b823b(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045e4a2();
      if (DAT_0097bdc4 != 0) {
        for (uVar5 = 0;
            (iVar3 = *(int *)(DAT_0097bdc4 + 0x578), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)));
            uVar5 = uVar5 + 1) {
          if (*(uint *)(iVar3 + uVar5 * 4) == (uint)*(ushort *)(unaff_EBP + 8)) {
            FUN_00705008(*(undefined4 *)(unaff_EBP + 8));
            goto LAB_0084730d;
          }
        }
        if (!bVar6) {
          FUN_00702efc(*(undefined4 *)(unaff_EBP + 8),1);
        }
      }
LAB_0084730d:
      FUN_0083f11a(unaff_EBP + 8);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_00847334:
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
        FUN_0062fcac(unaff_EBP + 8,unaff_EBP + -0x20);
      }
      else {
        iVar3 = FUN_0062d5eb(*(undefined4 *)(unaff_EBP + 8));
        if (iVar3 != 0) goto LAB_00847334;
      }
      if (*(short *)(unaff_EBP + 8) == 0x26fd) {
        *(undefined4 *)(extraout_ECX + 0x3304) = 0;
        *(undefined4 *)(extraout_ECX + 0x3300) = 1;
      }
      uVar2 = FUN_004538dc(&DAT_00964ec8,0,0);
      puVar4 = (undefined4 *)FUN_0045e070(unaff_EBP + -0x24,uVar2);
      uVar2 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar2 = FUN_0087b6ab(uVar2);
      FUN_0070e621(*(undefined2 *)(unaff_EBP + 8),uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
      }
      goto LAB_008474f6;
    }
    if (cVar1 != '\x02') goto LAB_008474f6;
    FUN_004245d2(unaff_EBP + -0x1c,8);
    FUN_00455c59(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_004b922e(unaff_EBP + 8,unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e4a2();
    FUN_00455c59(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_004b8255(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e4a2();
    if (DAT_0097bdc4 != 0) {
      for (uVar5 = 0;
          (iVar3 = *(int *)(DAT_0097bdc4 + 0x578), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)));
          uVar5 = uVar5 + 1) {
        if (*(uint *)(iVar3 + uVar5 * 4) == (uint)*(ushort *)(unaff_EBP + 8)) goto LAB_008474d4;
      }
    }
  }
  goto LAB_008474dc;
LAB_008474d4:
  FUN_0070328a(*(undefined4 *)(unaff_EBP + 8));
LAB_008474dc:
  FUN_00847528(*(undefined4 *)(unaff_EBP + 8));
  FUN_0070e46e(*(undefined2 *)(unaff_EBP + 8));
LAB_008474f6:
  FUN_008344dd();
  FUN_00833dbd();
  if (*(int *)(extraout_ECX + 0x31dc) != 0) {
    FUN_00700788(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


