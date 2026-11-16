/* FUN_5180fbb4 - 0x5180fbb4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180fbb4(undefined4 param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_438;
  undefined4 local_434 [9];
  uchar local_410 [880];
  undefined4 local_a0;
  int local_9c [4];
  undefined4 local_8c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = acmDriverOpen(&local_8,param_1,0);
  if (iVar1 == 0) {
    local_438 = 0x398;
    puVar3 = local_434;
    for (iVar1 = 0xe5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar1 = acmDriverDetailsA(param_1,&local_438,0);
    if (iVar1 == 0) {
      puVar2 = _mbsstr(local_410,(uchar *)s_MPEG_Layer_3_5181f5c4);
      if (puVar2 != (uchar *)0x0) {
        local_a0 = 0x98;
        piVar4 = local_9c;
        for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        local_9c[3] = param_2 + 8;
        local_8c = 0x1e;
        acmFormatEnumA(local_8,&local_a0,&LAB_5180fc74,param_2,0x800000);
        acmDriverClose(local_8,0);
      }
    }
  }
  return 1;
}


