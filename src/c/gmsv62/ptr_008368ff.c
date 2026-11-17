/* ptr_008368ff - 0x008368ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008368ff(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  FUN_007eddac();
  param_2 = (char *)0x23;
  param_3 = unaff_EBX;
  FUN_007edfe1();
  param_4 = (char *)0x83691a;
  FUN_007e6e3c();
  param_4 = (char *)0x836922;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == unaff_EDI) {
    param_4 = (char *)(unaff_EBP + 8);
    param_3 = (char *)0x836936;
    FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    param_2 = (char *)0x836944;
    FUN_0045ed72();
    param_3 = (char *)0x83694b;
    puVar2 = (undefined4 *)FUN_0045ee27();
    if (((char *)*puVar2 != unaff_EBX) && (*(char *)*puVar2 != (char)unaff_EBX)) {
      param_1 = (char *)0x400;
      param_2 = (char *)FUN_00415015();
      param_1 = (char *)0x83696b;
      uVar3 = FUN_00471777();
      param_4 = (char *)0xffffffff;
      *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
      param_3 = (char *)0x83697b;
      FUN_004150c0();
      if (*(char **)(unaff_EBP + 0xc) != unaff_EBX) {
        param_3 = (char *)(unaff_EBP + 8);
        *(undefined1 **)(unaff_EBP + 0xc) = &stack0x00000010;
        param_2 = (char *)0x8369d6;
        FUN_00414f8b();
        param_3 = (char *)0x8369de;
        FUN_00459cb5();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (*(char **)(unaff_EBP + 8) != unaff_EBX) {
          param_4 = *(char **)(unaff_EBP + 8) + -0xc;
          param_3 = (char *)0x8369f2;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        param_4 = (char *)0x8369ff;
        FUN_004c26e1();
        *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
        param_4 = (char *)0x837228;
        FUN_004027eb();
        param_3 = (char *)0x1f4;
        param_2 = (char *)0x836713;
        iVar1 = FUN_004becbc();
        if (iVar1 == 0) {
          *(BADSPACEBASE **)(unaff_EBP + 0xc) = register0x00000010;
          param_1 = unaff_EBX;
          param_2 = unaff_EBX;
          param_3 = unaff_EBX;
          FUN_00679d22(&stack0x00000000,0x137);
          FUN_007db3ad();
        }
        else {
          param_4 = (char *)0x839916;
          param_4 = (char *)FUN_007d1e08();
          param_3 = (char *)0x83991f;
          FUN_00457d37();
          param_4 = (char *)(unaff_EBP + -0x2c);
          param_3 = (char *)0x839928;
          FUN_00839a29();
          param_3 = (char *)0x839932;
          FUN_00839a39();
          param_4 = (char *)0x8e7;
          param_3 = (char *)(unaff_EBP + -0x38);
          param_2 = (char *)0x839945;
          FUN_00679d86();
          param_4 = (char *)0x64;
          *(undefined4 *)(unaff_EBP + -4) = 0x10b;
          param_3 = (char *)0x839955;
          param_3 = (char *)FUN_00411641();
          param_2 = (char *)0x83995b;
          FUN_007d4073();
          *(char **)(unaff_EBP + -4) = unaff_EBX;
          param_4 = (char *)0x839968;
          FUN_00402676();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        param_4 = (char *)0x839974;
        FUN_00457cd2();
        goto LAB_00839974;
      }
      *(BADSPACEBASE **)(unaff_EBP + 0xc) = register0x00000010;
      param_2 = unaff_EBX;
      param_3 = unaff_EBX;
      FUN_00679d22(&stack0x00000000,0x11d);
      FUN_007db3ad();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(char **)(unaff_EBP + 8) != unaff_EBX) {
      param_4 = *(char **)(unaff_EBP + 8) + -0xc;
      param_3 = (char *)0x8369b3;
      FUN_00434e38();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  param_4 = (char *)0x8369c0;
  FUN_004c26e1();
  param_4 = (char *)0x837373;
  FUN_004027eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  param_4 = (char *)0x83737f;
  FUN_0045ebca();
LAB_00839974:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


