/* ptr_004f5c6a - 0x004f5c6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004f5c6a(void)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  short sVar3;
  int iVar4;
  char *_Str2;
  int iVar5;
  undefined4 uVar6;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
code_r0x004f5c6a:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_c = 0x4f5c7d;
  sVar3 = FUN_0045f084();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e4a2();
  if (((int)sVar3 / 100 == 9) == unaff_EBX) goto LAB_004f5cc0;
LAB_004f5ca2:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(uint *)(unaff_EBP + -0x10) == unaff_EBX) goto LAB_004f5e50;
  do {
    FUN_00434e38();
LAB_004f5e50:
    do {
      while( true ) {
        piVar1 = (int *)(unaff_EBP + -0x20);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_004f6f4e();
          FUN_004f5f6c();
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        FUN_0045cdbc();
        unaff_EBX = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_0042459a();
        *(int *)(unaff_EBP + -0x14) = iVar4;
        if (iVar4 < 0) {
          FUN_004f5f18();
          goto LAB_004f5ca2;
        }
        if (9999 < *(int *)(unaff_EBP + -0x14)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 9999;
        }
        _Str1 = *(char **)(unaff_EBP + -0x10);
        if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) break;
        _Str2 = *(char **)(*(int *)(DAT_00978140 + 8) + 0xd7c);
        if (_Str2 == (char *)0x0) {
          _Str2 = DAT_00980dfc;
        }
        iStack_c = 0x4f5c55;
        iVar4 = _strcmp(_Str1,_Str2);
        if (iVar4 != 0) {
          FUN_00455c59();
          goto code_r0x004f5c6a;
        }
LAB_004f5cc0:
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        for (; (iVar4 = *(int *)(unaff_EDI + 0x728), iVar4 != 0 &&
               (unaff_EBX < *(uint *)(iVar4 + -4))); unaff_EBX = unaff_EBX + 1) {
          iVar2 = *(int *)(unaff_EBP + -0x18);
          iVar5 = FUN_0045ec92();
          if (iVar5 != 0) {
            *(undefined4 *)(iVar2 + iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
            goto LAB_004f5e41;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0xc;
        }
        iVar4 = FUN_004f6e60();
        FUN_00414f8b();
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_c = 0x4f5d40;
        FUN_00679d86();
        iStack_c = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_10 = 0x4f5d52;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          FUN_00403384();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00403191();
        iStack_c = unaff_EBP + -0x54;
        iStack_10 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_14 = 0x4f5d9b;
        uVar6 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x18) = &uStack_14;
        FUN_004033a1(uVar6);
        iVar4 = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00405a1d(iVar4);
        FUN_00402660();
        FUN_00404a02(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_c = 0x4f5dcd;
        uVar6 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
        iVar4 = FUN_0041a581();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
LAB_004f5e41:
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        unaff_EDI = *(int *)(unaff_EBP + -0x2c);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    } while (_Str1 == (char *)0x0);
  } while( true );
}


