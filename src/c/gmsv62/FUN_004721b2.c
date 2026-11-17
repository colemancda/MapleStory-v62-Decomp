/* FUN_004721b2 - 0x004721b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004721b2(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *_Str1;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str2;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  iVar2 = iVar2 + -1;
  *(int *)(unaff_EBP + -0x10) = iVar2;
  do {
    if (iVar2 < 0) {
      uVar3 = 0;
LAB_0047223b:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar3;
    }
    _Str2 = *(char **)(unaff_EBP + 8);
    uVar3 = FUN_004726fc();
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffe0;
    FUN_00450368(uVar3);
    piVar4 = (int *)FUN_0047252b(unaff_EBP + -0x18);
    if (_Str2 == (char *)0x0) {
      _Str2 = DAT_00980dfc;
    }
    _Str1 = (char *)*piVar4;
    if ((char *)*piVar4 == (char *)0x0) {
      _Str1 = DAT_00980dfc;
    }
    iVar2 = _strcmp(_Str1,_Str2);
    FUN_00414ebb();
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_0047223b;
    }
    piVar4 = (int *)(unaff_EBP + -0x10);
    *piVar4 = *piVar4 + -1;
    iVar2 = *piVar4;
  } while( true );
}


