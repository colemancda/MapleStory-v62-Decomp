/* FUN_50c05021 - 0x50c05021 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c05021(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ushort *puVar11;
  int *piVar12;
  LPCSTR lpLibFileName;
  HMODULE hModule;
  FARPROC pFVar13;
  FARPROC pFVar14;
  ushort *puVar15;
  int unaff_EBP;
  
  FUN_50c10270();
  piVar12 = (int *)**(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (piVar12 == (int *)0x0) {
    uVar8 = 0;
  }
  else if (*piVar12 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*piVar12 + -4) >> 1;
  }
  if (uVar8 == 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x34),0x800401f8,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_50c14eb0);
  }
  if (piVar12 == (int *)0x0) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)*piVar12;
  }
  if ((*puVar11 == 0x2f) || (*puVar11 == 0x5c)) {
    if ((puVar11[1] != 0x2f) && (puVar11[1] != 0x5c)) {
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 1;
    }
  }
  FUN_50c02a35(0,uVar8);
  FUN_50c05e8d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)**(undefined4 **)(unaff_EBP + 8);
  }
  for (; uVar7 = *puVar11, uVar7 != 0; puVar11 = puVar11 + 1) {
    if ((0x60 < uVar7) && (uVar7 < 0x7b)) {
      uVar7 = uVar7 - 0x20;
    }
    *puVar15 = uVar7;
    puVar15 = puVar15 + 1;
  }
  iVar9 = FUN_50c05515(&DAT_50c1ca94,(int *)(unaff_EBP + 8),(void *)0x0);
  if (iVar9 != 0) {
    FUN_50c10d21(iVar9);
    iVar1 = *(int *)(unaff_EBP + 0xc);
    FUN_50c053d0(iVar1);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar9 + 4);
    FUN_50c02a72((undefined4 *)(unaff_EBP + 8));
    goto LAB_50c0511d;
  }
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (void *)**(undefined4 **)(unaff_EBP + 8);
  }
  iVar9 = memcmp(pvVar10,u_PROPERTY_50c17464,0x12);
  if (iVar9 == 0) {
LAB_50c052a5:
    hModule = DAT_50c1ca24;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)**(undefined4 **)(unaff_EBP + 8);
    }
    iVar9 = memcmp(pvVar10,u_LIST_50c17458,10);
    if (iVar9 == 0) goto LAB_50c052a5;
    if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)**(undefined4 **)(unaff_EBP + 8);
    }
    iVar9 = memcmp(pvVar10,&DAT_50c17318,8);
    if (iVar9 == 0) goto LAB_50c052a5;
    if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)**(undefined4 **)(unaff_EBP + 8);
    }
    iVar9 = FUN_50c0f7ba(puVar11);
    if (iVar9 == 0) {
      FUN_50c02963();
      *(undefined4 *)(unaff_EBP + -0x18) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_50c06293();
      *(undefined4 *)(unaff_EBP + -0x18) = 6;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      piVar12 = FUN_50c05ee8();
      bVar6 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
    }
    else {
      iVar9 = *(int *)(unaff_EBP + 8);
      *(int *)(unaff_EBP + -0x1c) = iVar9;
      if (iVar9 != 0) {
        InterlockedIncrement((LONG *)(iVar9 + 8));
      }
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      piVar12 = (int *)(unaff_EBP + -0x1c);
    }
    *(int *)(unaff_EBP + -0x14) = *piVar12;
    FUN_50c04bec((int *)(unaff_EBP + -0x14));
    if (bVar3) {
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x20));
    }
    if (bVar4) {
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x24));
    }
    if ((bVar5) && (*(int **)(unaff_EBP + -0x10) != (int *)0x0)) {
      FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if ((bVar6) && (*(int **)(unaff_EBP + -0x1c) != (int *)0x0)) {
      FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
    }
    if (*(int **)(unaff_EBP + -0x14) == (int *)0x0) {
      lpLibFileName = (LPCSTR)0x0;
    }
    else {
      lpLibFileName = (LPCSTR)FUN_50c06142(*(int **)(unaff_EBP + -0x14));
    }
    hModule = LoadLibraryA(lpLibFileName);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      FUN_50c02a85(*(int **)(unaff_EBP + -0x14));
    }
  }
  if (hModule == (HMODULE)0x0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x34),0x800401f8,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_50c14eb0);
  }
  pFVar13 = GetProcAddress(hModule,s_DllGetClassObject_50c1743c);
  pFVar14 = GetProcAddress(hModule,s_DllCanUnloadNow_50c1742c);
  *(FARPROC *)(unaff_EBP + -0x24) = pFVar14;
  if ((pFVar13 == (FARPROC)0x0) || (pFVar14 == (FARPROC)0x0)) {
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FreeLibrary(hModule);
    }
    FUN_50c061b4((void *)(unaff_EBP + -0x44),0x800401f9,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x44),(ThrowInfo *)&DAT_50c14eb0);
  }
  iVar9 = *(int *)(unaff_EBP + 0xc);
  FUN_50c0539d(iVar9);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  piVar12 = (int *)(iVar9 + 4);
  **(undefined4 **)(iVar9 + 4) = hModule;
  *(undefined4 *)(*piVar12 + 4) = uVar2;
  *(FARPROC *)(*piVar12 + 8) = pFVar13;
  *(undefined4 *)(*piVar12 + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
  FUN_50c05568();
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + 8));
  }
LAB_50c0511d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


