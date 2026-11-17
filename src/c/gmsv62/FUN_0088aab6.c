/* FUN_0088aab6 - 0x0088aab6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 * FUN_0088aab6(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int local_8;
  
  puVar8 = (undefined4 *)PTR_PTR_00973684;
  iVar5 = 0;
  local_8 = 7;
  puVar6 = (undefined4 *)PTR_PTR_00973684;
  do {
    sVar1 = _strlen((char *)puVar6[7]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
    iVar5 = sVar2 + iVar5 + 2 + sVar1;
  } while (local_8 != 0);
  puVar3 = _malloc(iVar5 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    iVar5 = 7;
    puVar7 = puVar3;
    do {
      *puVar7 = 0x3a;
      puVar7 = puVar7 + 1;
      pcVar4 = (char *)FUN_0087b200(puVar7,*puVar8);
      sVar1 = _strlen(pcVar4);
      puVar7 = puVar7 + sVar1;
      *puVar7 = 0x3a;
      pcVar4 = (char *)FUN_0087b200(puVar7 + 1,puVar8[7]);
      sVar1 = _strlen(pcVar4);
      puVar7 = puVar7 + 1 + sVar1;
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar7 = 0;
  }
  return puVar3;
}


