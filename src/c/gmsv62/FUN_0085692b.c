/* FUN_0085692b - 0x0085692b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0085692b(void)

{
  char *_Str2;
  int iVar1;
  int extraout_ECX;
  char *_Str1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00879bb8();
  iVar2 = 0;
  iVar4 = *(int *)(extraout_ECX + 0x2cac);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
LAB_00856993:
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
        iVar1 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
      }
      if (iVar1 <= iVar4) goto LAB_00856993;
      _Str2 = (char *)(*(int *)(extraout_ECX + 0x2cbc) + iVar2);
      if (_Str2 == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      _Str1 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + 8) != 0) {
        _Str1 = *(char **)(unaff_EBP + 8);
      }
      iVar1 = _strcmp(_Str1,_Str2);
      if (iVar1 == 0) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x25;
    }
    uVar3 = *(undefined4 *)(*(int *)(extraout_ECX + 0x2cb8) + iVar4 * 4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


