/* ptr_0083684f - 0x0083684f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0083684f(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  if ((*(byte *)(*(int *)(unaff_EBP + -0x30) + 0x109) & 0x40) == 0) {
    FUN_004497f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (*(char **)(unaff_EBP + 0x10) != unaff_EBX) {
      pcVar1 = (char *)FUN_004029b9();
      *(char **)(unaff_EBP + 0xc) = pcVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (pcVar1 == unaff_EBX) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_007e62e9();
      }
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
      *(uint *)(unaff_EBP + -0x48) = -(uint)(uVar3 != 0) & uVar3 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_004c26c4();
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffff4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_004c2677();
      FUN_007eddac();
      FUN_007edfe1();
      FUN_007e6e3c();
      iVar2 = FUN_004bc6a2();
      if (iVar2 == unaff_EDI) {
        FUN_00641b6c();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_0045ed72();
        puVar4 = (undefined4 *)FUN_0045ee27();
        if (((char *)*puVar4 != unaff_EBX) && (*(char *)*puVar4 != (char)unaff_EBX)) {
          FUN_00415015();
          uVar5 = FUN_00471777();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
          FUN_004150c0();
          if (*(char **)(unaff_EBP + 0xc) != unaff_EBX) {
            *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffffc;
            FUN_00414f8b();
            FUN_00459cb5();
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            if (*(char **)(unaff_EBP + 8) != unaff_EBX) {
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            FUN_004c26e1();
            *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
            FUN_004027eb();
            iVar2 = FUN_004becbc();
            if (iVar2 == 0) {
              *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffec;
              FUN_00679d22(&stack0xffffffec,0x137);
              FUN_007db3ad();
            }
            else {
              FUN_007d1e08();
              FUN_00457d37();
              FUN_00839a29();
              FUN_00839a39();
              FUN_00679d86();
              *(undefined4 *)(unaff_EBP + -4) = 0x10b;
              FUN_00411641();
              FUN_007d4073();
              *(char **)(unaff_EBP + -4) = unaff_EBX;
              FUN_00402676();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00457cd2();
            goto LAB_00839974;
          }
          *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffec;
          FUN_00679d22(&stack0xffffffec,0x11d);
          FUN_007db3ad();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (*(char **)(unaff_EBP + 8) != unaff_EBX) {
          FUN_00434e38();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_004c26e1();
    }
    FUN_004027eb();
  }
  else {
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffec;
    FUN_00679d22(&stack0xffffffec,0x11f);
    FUN_007db3ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
LAB_00839974:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


