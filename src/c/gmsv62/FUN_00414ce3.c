/* FUN_00414ce3 - 0x00414ce3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00414ce3(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  char *_Str2;
  int iVar2;
  char *_Str1;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00414d4e(*param_2);
    for (iVar3 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      _Str2 = (char *)*param_2;
      if ((char *)*param_2 == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      _Str1 = *(char **)(iVar3 + 8);
      if (*(char **)(iVar3 + 8) == (char *)0x0) {
        _Str1 = DAT_00980dfc;
      }
      iVar2 = _strcmp(_Str1,_Str2);
      if (iVar2 == 0) {
        if (param_3 != 0) {
          FUN_0041851e(iVar3 + 0xc);
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}


