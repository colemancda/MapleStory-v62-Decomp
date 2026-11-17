/* FUN_00873e20 - 0x00873e20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00873e20(int param_1,int param_2,int param_3,uint *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  HANDLE hFile;
  uint *puVar7;
  HANDLE local_458;
  int local_454;
  undefined4 local_450;
  int local_44c;
  uint *local_448;
  int local_444;
  int local_440;
  undefined4 local_43c;
  int local_438;
  undefined4 local_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  int local_420 [3];
  uint *local_414;
  uint local_410 [260];
  
  hFile = *(HANDLE *)(param_1 + 4);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  local_450 = *(undefined4 *)(param_1 + 0xc);
  local_454 = param_2;
  local_44c = param_3;
  local_448 = param_4;
  local_458 = hFile;
  local_444 = param_1;
  if (param_3 == 0x63d) {
    piVar5 = local_420;
    for (iVar3 = 0x108; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_448 = (uint *)*param_4;
    local_420[0] = param_2;
    local_420[2] = param_3;
    puVar7 = local_410;
    for (uVar4 = (uint)local_448 >> 2; param_4 = param_4 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *param_4;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = (uint)local_448 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar7 = (char)*param_4;
      param_4 = (uint *)((int)param_4 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    puVar7 = local_448 + 4;
    piVar5 = local_420;
    local_420[1] = local_450;
    local_414 = local_448;
  }
  else if (param_3 == 0x63c) {
    piVar5 = local_420;
    for (iVar3 = 0x108; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_448 = (uint *)*param_4;
    local_420[0] = param_2;
    local_420[2] = param_3;
    puVar7 = local_410;
    for (uVar4 = (uint)local_448 >> 2; param_4 = param_4 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *param_4;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = (uint)local_448 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar7 = (char)*param_4;
      param_4 = (uint *)((int)param_4 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    puVar7 = local_448 + 4;
    piVar5 = local_420;
    local_420[1] = local_450;
    local_414 = local_448;
  }
  else if (param_3 == 0x613) {
    iVar3 = lstrlenA((LPCSTR)param_4);
    local_448 = (uint *)(iVar3 + 1);
    if ((uint *)0x200 < local_448) {
      *(undefined1 *)((int)param_4 + 0x1ff) = 0;
      local_448 = (uint *)0x200;
    }
    local_420[0] = local_454;
    local_420[2] = local_44c;
    local_420[1] = local_450;
    puVar6 = local_410;
    for (uVar4 = (uint)local_448 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_4;
      param_4 = param_4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar7 = local_448 + 4;
    for (uVar4 = (uint)local_448 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar6 = (char)*param_4;
      param_4 = (uint *)((int)param_4 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    piVar5 = local_420;
    hFile = *(HANDLE *)(local_444 + 4);
    local_414 = local_448;
  }
  else if (param_3 == 0x619) {
    local_428 = param_4[2];
    local_448 = (uint *)0x10;
    local_434 = 0x10;
    local_42c = param_4[1];
    local_440 = param_2;
    local_430 = *param_4;
    local_424 = param_4[3];
    piVar5 = &local_440;
    puVar7 = (uint *)0x20;
    local_438 = param_3;
    local_43c = local_450;
  }
  else {
    piVar5 = &local_454;
    puVar7 = (uint *)0x10;
  }
  BVar1 = WriteFile(hFile,piVar5,(DWORD)puVar7,(LPDWORD)&local_458,(LPOVERLAPPED)0x0);
  if ((BVar1 == 0) && (((DVar2 = GetLastError(), DVar2 == 0x6d || (DVar2 == 0xe8)) || (DVar2 == 6)))
     ) {
    return 0;
  }
  return 1;
}


