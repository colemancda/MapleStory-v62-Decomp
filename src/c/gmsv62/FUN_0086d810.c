/* FUN_0086d810 - 0x0086d810 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086d810(LPVOID param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  DWORD DVar5;
  HMODULE pHVar6;
  HANDLE pvVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  DWORD local_108;
  char local_104 [260];
  
  if (*(char *)((int)param_1 + 0x20) != '\0') {
    return 1;
  }
  iVar1 = (int)param_1 + 0x24;
  uVar3 = FUN_00875080(&DAT_0096e24c);
  FUN_0086cff0(iVar1,uVar3);
  FUN_0086d2f0(local_104,0x104);
  uVar8 = 0xffffffff;
  pcVar4 = &DAT_009640e8;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  iVar9 = -1;
  pcVar4 = local_104;
  do {
    pcVar11 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar2 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar4 = (char *)FUN_00875080(&DAT_0096e23c);
  uVar8 = 0xffffffff;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  iVar9 = -1;
  pcVar4 = local_104;
  do {
    pcVar11 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar2 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar3 = FUN_00875080(&DAT_0096e230,local_104);
  FUN_0086cff0(iVar1,uVar3);
  cVar2 = FUN_00873350(local_104,1);
  if (cVar2 == '\0') {
    GetLastError();
    uVar3 = *(undefined4 *)((int)param_1 + 0x2b08);
    DVar5 = GetLastError();
    uVar3 = FUN_00875080(&DAT_0096e210,uVar3,DVar5);
    FUN_0086cff0(iVar1,uVar3);
    return 0;
  }
  pHVar6 = LoadLibraryA(local_104);
  *(HMODULE *)((int)param_1 + 0x2b30) = pHVar6;
  if (pHVar6 == (HMODULE)0x0) {
    DVar5 = GetLastError();
    puVar13 = &DAT_0096e1f4;
  }
  else {
    uVar3 = FUN_0086f770(pHVar6,2);
    *(undefined4 *)((int)param_1 + 0x2b90) = uVar3;
    iVar9 = FUN_0086f770(*(undefined4 *)((int)param_1 + 0x2b30),1);
    *(int *)((int)param_1 + 0x2b94) = iVar9;
    if ((*(int *)((int)param_1 + 0x2b90) == 0) || (iVar9 == 0)) {
      DVar5 = GetLastError();
      puVar13 = &DAT_0096e13c;
    }
    else {
      pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)((int)param_1 + 0x14) = pvVar7;
      if (pvVar7 == (HANDLE)0x0) {
        DVar5 = GetLastError();
        puVar13 = &DAT_0096e1cc;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x20) = 1;
        pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0086dc90,param_1,0,&local_108);
        *(HANDLE *)((int)param_1 + 0x2b34) = pvVar7;
        if (pvVar7 == (HANDLE)0x0) {
          DVar5 = GetLastError();
          puVar13 = &DAT_0096e1a8;
        }
        else {
          uVar3 = FUN_00875080(&DAT_0096e184,local_108);
          FUN_0086cff0(iVar1,uVar3);
          DVar5 = (**(code **)((int)param_1 + 0x2b90))
                            (*(undefined4 *)((int)param_1 + 0x2b0c),
                             *(undefined4 *)((int)param_1 + 0x2b80),
                             *(undefined4 *)((int)param_1 + 0x2b7c),
                             *(undefined4 *)((int)param_1 + 0x14));
          if (DVar5 == 0x6b) {
            uVar3 = FUN_00875080(&DAT_0096e154);
            FUN_0086cff0(iVar1,uVar3);
            return 1;
          }
          puVar13 = &DAT_0096e168;
        }
      }
    }
  }
  uVar3 = FUN_00875080(puVar13,DVar5);
  FUN_0086cff0(iVar1,uVar3);
  return 0;
}


