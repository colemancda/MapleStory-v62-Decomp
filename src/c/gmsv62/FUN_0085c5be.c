/* FUN_0085c5be - 0x0085c5be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0085c5be(void)

{
  char *_Str1;
  int iVar1;
  int extraout_ECX;
  char *_Str2;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  char *pcVar4;
  
  FUN_00879bb8();
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0x2b40) != 0) {
    pcVar4 = (char *)(extraout_ECX + 0x2b5c);
    do {
      _Str2 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      _Str1 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + 8) != 0) {
        _Str1 = *(char **)(unaff_EBP + 8);
      }
      iVar1 = _strcmp(_Str1,_Str2);
      if (iVar1 == 0) {
        uVar3 = *(undefined4 *)(extraout_ECX + 0x2b44 + iVar2 * 4);
        goto LAB_0085c60b;
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0xd;
    } while (iVar2 < 6);
  }
  uVar3 = 0;
LAB_0085c60b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


