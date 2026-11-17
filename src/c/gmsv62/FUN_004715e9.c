/* FUN_004715e9 - 0x004715e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_004715e9(char *param_1,uint param_2)

{
  size_t sVar1;
  int iVar2;
  undefined1 local_814 [1024];
  undefined1 local_414 [1024];
  int local_14;
  char *local_10;
  char *local_c;
  int local_8;
  
  _memset(local_414,0,0x400);
  _memset(local_814,0,0x400);
  sVar1 = _strlen(param_1);
  if (sVar1 < 0x3ff) {
    FUN_004714b2(param_1,local_414,PTR_s__________________00964718,param_2);
    for (param_2 = 0; (DAT_009784f4 != 0 && (param_2 < *(uint *)(DAT_009784f4 + -4)));
        param_2 = param_2 + 1) {
      local_c = *(char **)(param_2 * 4 + DAT_009784f4);
      local_10 = *(char **)(param_2 * 4 + DAT_009784f0);
      local_8 = FUN_00471450(local_414,local_c);
      while (local_8 != 0) {
        if (*local_10 == '\0') goto LAB_00471753;
        iVar2 = local_8 - (int)local_414;
        if (0x3ff < iVar2) goto LAB_00471753;
        local_14 = iVar2;
        FUN_0087b372(local_814,local_414,iVar2);
        FUN_0087b372(local_814 + iVar2,local_10,0x3ff - iVar2);
        sVar1 = _strlen(local_10);
        iVar2 = iVar2 + sVar1;
        if (0x3ff < iVar2) goto LAB_00471753;
        sVar1 = _strlen(local_c);
        if (0x3ff < sVar1 + local_14) goto LAB_00471753;
        sVar1 = _strlen(local_c);
        FUN_0087b372(local_814 + iVar2,sVar1 + local_8,0x3ff - iVar2);
        FUN_0087b372(local_414,local_814,0x3ff);
        local_8 = FUN_00471450(local_414,local_c);
      }
      local_8 = 0;
    }
    FUN_004714f4(local_414,param_1,PTR_s__________________00964718);
  }
  else {
LAB_00471753:
    param_1 = (char *)0x0;
  }
  return param_1;
}


