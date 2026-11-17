/* FUN_00887eba - 0x00887eba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00887eba(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_0098092c == (code *)0x0) {
    iVar1 = FUN_008885eb();
    if (iVar1 == 0) {
      DAT_0098092c = FUN_00888621;
    }
    else {
      DAT_0098092c = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_0098091c = param_1;
    if (*param_1 != '\0') {
      FUN_00888037(&PTR_s_american_00973360,0x40,&DAT_0098091c);
    }
    DAT_00980920 = param_1 + 0x40;
    if ((DAT_00980920 != (char *)0x0) && (*DAT_00980920 != '\0')) {
      FUN_00888037(&PTR_s_america_009732a8,0x16,&DAT_00980920);
    }
    DAT_00980924 = 0;
    if ((DAT_0098091c != (char *)0x0) && (*DAT_0098091c != '\0')) {
      if ((DAT_00980920 == (char *)0x0) || (*DAT_00980920 == '\0')) {
        FUN_0088831a();
      }
      else {
        FUN_0088808f();
      }
      goto LAB_00887f77;
    }
    if ((DAT_00980920 != (char *)0x0) && (*DAT_00980920 != '\0')) {
      FUN_0088842d();
      goto LAB_00887f77;
    }
  }
  FUN_008884ea();
LAB_00887f77:
  if ((((DAT_00980924 == 0) || (uVar2 = FUN_00888504(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_0098090c,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_0098090c;
    param_2[1] = (undefined2)DAT_00980928;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_0098092c)(DAT_0098090c,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_0098092c)(DAT_00980928,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0087b818(uVar2,param_3 + 0x80,10);
  }
  return 1;
}


