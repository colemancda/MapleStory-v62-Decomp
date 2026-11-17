/* FUN_0086fab0 - 0x0086fab0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086fab0(void)

{
  char cVar1;
  LPCSTR pCVar2;
  LSTATUS LVar3;
  undefined4 uVar4;
  char *pcVar5;
  HANDLE hFile;
  HMODULE hLibModule;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  LPDWORD pDVar16;
  DWORD DVar17;
  LPDWORD pDVar18;
  DWORD dwType;
  REGSAM RVar19;
  BYTE *pBVar20;
  HKEY *ppHVar21;
  DWORD *pDVar22;
  CHAR *pCVar23;
  DWORD cbData;
  BYTE aBStack_2b0 [132];
  code *pcStack_22c;
  HKEY local_228;
  DWORD local_224;
  DWORD local_220;
  int local_21c;
  int *piStack_218;
  code *local_214;
  undefined4 local_210 [2];
  BYTE local_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  CHAR local_104 [260];
  
  ppHVar21 = &local_228;
  uVar12 = 0;
  RVar19 = 1;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ec5c);
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,pCVar2,DVar17,RVar19,ppHVar21);
  if (LVar3 == 0) {
    pDVar22 = &local_224;
    pBVar20 = &local_208;
    pDVar18 = (LPDWORD)0x0;
    pDVar16 = (LPDWORD)0x0;
    local_224 = 0x104;
    pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ec50);
    LVar3 = RegQueryValueExA(local_228,pCVar2,pDVar16,pDVar18,pBVar20,pDVar22);
    if ((LVar3 == 0) && (DAT_0097fc64 != 0)) {
      uVar4 = FUN_00875080(&DAT_0096ec3c,&local_208);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar4);
    }
    RegCloseKey(local_228);
  }
  ppHVar21 = &local_228;
  RVar19 = 3;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ebd8);
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,pCVar2,DVar17,RVar19,ppHVar21);
  if (LVar3 != 0) {
    return 0;
  }
  pDVar22 = &local_224;
  pBVar20 = &local_208;
  pDVar18 = (LPDWORD)0x0;
  pDVar16 = (LPDWORD)0x0;
  local_224 = 0x104;
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ebc8);
  LVar3 = RegQueryValueExA(local_228,pCVar2,pDVar16,pDVar18,pBVar20,pDVar22);
  if ((LVar3 == 0) && (DAT_0097fc64 != 0)) {
    uVar4 = FUN_00875080(&DAT_0096eba4,local_208,uStack_207,uStack_206,uStack_205);
    FUN_0086cff0(DAT_0097fc64 + 0x24,uVar4);
  }
  GetSystemDirectoryA(local_104,0x104);
  pcVar5 = (char *)FUN_00875080(&DAT_0096eb90);
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar5 = local_104;
  do {
    pcVar13 = pcVar5;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  pcVar5 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  local_220 = 0;
  hFile = CreateFileA(local_104,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    if (DAT_0097fc64 != 0) {
      pCVar23 = local_104;
      DVar17 = GetLastError();
      uVar4 = FUN_00875080(&DAT_0096dc54,DVar17,pCVar23);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar4);
    }
  }
  else {
    local_220 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DAT_0097fc64 != 0) {
      uVar4 = FUN_00875080(&DAT_0096dc44,local_220);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar4);
    }
    CloseHandle(hFile);
  }
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096eae0);
  hLibModule = LoadLibraryA(pCVar2);
  if (hLibModule != (HMODULE)0x0) {
    uVar4 = FUN_00875080(&DAT_0096eac4);
    pcVar6 = (code *)FUN_0086f770(hLibModule,uVar4);
    uVar4 = FUN_00875080(&DAT_0096eaac);
    pcVar7 = (code *)FUN_0086f770(hLibModule,uVar4);
    local_214 = pcVar7;
    uVar4 = FUN_00875080(&DAT_0096ea98);
    local_21c = FUN_0086f770(hLibModule,uVar4);
    if ((((pcVar6 != (code *)0x0) && (pcVar7 != (code *)0x0)) && (local_21c != 0)) &&
       (iVar10 = (*pcVar6)(local_104,local_210), iVar10 != 0)) {
      uVar4 = FUN_00402605(iVar10);
      (*local_214)(local_104,local_210[0],iVar10,uVar4);
      (*pcStack_22c)(uVar4,&DAT_009640e8,&local_228,&local_21c);
      if ((*piStack_218 == -0x110fb43) && (DAT_0097fc64 != 0)) {
        uVar8 = FUN_00875080(&DAT_0096eb78,(uint)piStack_218[2] >> 0x10,(short)piStack_218[2],
                             (uint)piStack_218[3] >> 0x10,(short)piStack_218[3]);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar8);
      }
      FUN_00402614(uVar4);
    }
    FreeLibrary(hLibModule);
  }
  if (local_220 == 0x18d10) {
    if (DAT_0097fc64 != 0) {
      uVar12 = FUN_00875080(&DAT_0096eb5c);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar12);
    }
    aBStack_2b0[1] = 199;
    aBStack_2b0[0x11] = 199;
    aBStack_2b0[0x33] = 0xf2;
    aBStack_2b0[0x26] = 0x16;
    aBStack_2b0[0x37] = 0xf2;
    aBStack_2b0[0x44] = 0x16;
    aBStack_2b0[0] = '*';
    aBStack_2b0[2] = 0xe;
    aBStack_2b0[3] = 0x10;
    aBStack_2b0[4] = 6;
    aBStack_2b0[5] = 0xbe;
    aBStack_2b0[6] = 0xa7;
    aBStack_2b0[7] = 0xcd;
    aBStack_2b0[8] = 0xf5;
    aBStack_2b0[9] = 0xfa;
    aBStack_2b0[10] = 0x66;
    aBStack_2b0[0xb] = 0xf;
    aBStack_2b0[0xc] = 0x86;
    aBStack_2b0[0xd] = 0xa3;
    aBStack_2b0[0xe] = 0x8a;
    aBStack_2b0[0xf] = 0x41;
    aBStack_2b0[0x10] = 0x58;
    aBStack_2b0[0x12] = 0xaf;
    aBStack_2b0[0x13] = 0x6e;
    aBStack_2b0[0x14] = 0xf5;
    aBStack_2b0[0x15] = 0xc1;
    aBStack_2b0[0x16] = 0x92;
    aBStack_2b0[0x17] = 0x3d;
    aBStack_2b0[0x18] = 0xf5;
    aBStack_2b0[0x19] = 0x56;
    aBStack_2b0[0x1a] = 0xa8;
    aBStack_2b0[0x1b] = 0x81;
    aBStack_2b0[0x1c] = 0x48;
    aBStack_2b0[0x1d] = 0x2e;
    aBStack_2b0[0x1e] = 0x89;
    aBStack_2b0[0x1f] = 0x7c;
    aBStack_2b0[0x20] = 4;
    aBStack_2b0[0x21] = 0x36;
    aBStack_2b0[0x22] = 0x53;
    aBStack_2b0[0x23] = 0xe3;
    aBStack_2b0[0x24] = 100;
    aBStack_2b0[0x25] = 0x79;
    aBStack_2b0[0x27] = 0x34;
    aBStack_2b0[0x28] = 0x7d;
    aBStack_2b0[0x29] = 0xe8;
    aBStack_2b0[0x2a] = 0xb0;
    aBStack_2b0[0x2b] = 0xae;
    aBStack_2b0[0x2c] = 0xd7;
    aBStack_2b0[0x2d] = 0x3c;
    aBStack_2b0[0x2e] = 0xc5;
    aBStack_2b0[0x2f] = 0xeb;
    aBStack_2b0[0x30] = 0x7a;
    aBStack_2b0[0x31] = 0x25;
    aBStack_2b0[0x32] = 0x2d;
    aBStack_2b0[0x34] = 0xb8;
    aBStack_2b0[0x35] = 0xe4;
    aBStack_2b0[0x36] = 0xf4;
    aBStack_2b0[0x38] = 0xcd;
    aBStack_2b0[0x39] = 0x95;
    aBStack_2b0[0x3a] = 0xb;
    aBStack_2b0[0x3b] = 0xdd;
    aBStack_2b0[0x3c] = 0x4f;
    aBStack_2b0[0x3d] = 10;
    aBStack_2b0[0x3e] = 0x9f;
    aBStack_2b0[0x3f] = 0x27;
    aBStack_2b0[0x40] = 0x19;
    aBStack_2b0[0x41] = 0xb5;
    aBStack_2b0[0x42] = 0xf6;
    aBStack_2b0[0x43] = 0x52;
    aBStack_2b0[0x45] = 0x77;
    aBStack_2b0[0x46] = 1;
    aBStack_2b0[0x47] = 0x2c;
    aBStack_2b0[0x48] = 0xf6;
    aBStack_2b0[0x49] = 0xae;
    aBStack_2b0[0x4a] = 0x9a;
    aBStack_2b0[0x65] = 0xf5;
    aBStack_2b0[0x4b] = 0xd3;
    aBStack_2b0[0x4c] = 0x7f;
    aBStack_2b0[0x4d] = 0xbf;
    aBStack_2b0[0x4e] = 0x6a;
    aBStack_2b0[0x4f] = 0x22;
    aBStack_2b0[0x50] = 0x91;
    aBStack_2b0[0x51] = 0x6b;
    aBStack_2b0[0x52] = 0xf3;
    aBStack_2b0[0x53] = 0xdb;
    aBStack_2b0[0x54] = 0x93;
    aBStack_2b0[0x55] = 0xd;
    aBStack_2b0[0x56] = 0x1c;
    aBStack_2b0[0x57] = 0xd2;
    aBStack_2b0[0x58] = 0;
    aBStack_2b0[0x59] = 0xb5;
    aBStack_2b0[0x5a] = 0xb8;
    aBStack_2b0[0x5b] = 0x14;
    aBStack_2b0[0x5c] = 0x1c;
    aBStack_2b0[0x5d] = 0x3e;
    aBStack_2b0[0x5e] = 0x9e;
    aBStack_2b0[0x5f] = 0x94;
    aBStack_2b0[0x60] = 0x7b;
    aBStack_2b0[0x61] = 0xa9;
    aBStack_2b0[0x62] = 0x8e;
    aBStack_2b0[99] = 0xc6;
    aBStack_2b0[100] = 0x84;
    aBStack_2b0[0x66] = 0x2b;
    aBStack_2b0[0x67] = 0xfa;
    aBStack_2b0[0x68] = 0xb5;
    aBStack_2b0[0x69] = 0x95;
    aBStack_2b0[0x6a] = 0;
    aBStack_2b0[0x6b] = 0xa5;
    aBStack_2b0[0x6c] = 0x95;
    aBStack_2b0[0x6d] = 0xb2;
    aBStack_2b0[0x6e] = 0x65;
    aBStack_2b0[0x6f] = 0x8c;
    aBStack_2b0[0x70] = 0x31;
    aBStack_2b0[0x71] = 0x19;
    aBStack_2b0[0x72] = 0x77;
    aBStack_2b0[0x73] = 0;
    aBStack_2b0[0x74] = 0xcd;
    aBStack_2b0[0x75] = 0x5b;
    aBStack_2b0[0x76] = 0x4e;
    aBStack_2b0[0x77] = 0x92;
    aBStack_2b0[0x78] = 0x68;
    aBStack_2b0[0x79] = 0xe4;
    aBStack_2b0[0x7a] = 0x42;
    aBStack_2b0[0x7b] = 0x66;
    aBStack_2b0[0x7c] = 0x17;
    aBStack_2b0[0x7d] = 0xb5;
    aBStack_2b0[0x7e] = 0xd4;
    aBStack_2b0[0x7f] = 0x93;
    puVar15 = &DAT_0096eb4c;
  }
  else {
    if (local_220 != 0x17110) goto LAB_00870521;
    if (DAT_0097fc64 != 0) {
      uVar12 = FUN_00875080(&DAT_0096eb30);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar12);
    }
    aBStack_2b0[0x13] = 7;
    aBStack_2b0[0x28] = 7;
    aBStack_2b0[0x2f] = 7;
    aBStack_2b0[0] = '_';
    aBStack_2b0[1] = 0x71;
    aBStack_2b0[2] = 0x69;
    aBStack_2b0[3] = 0x53;
    aBStack_2b0[4] = 0x8a;
    aBStack_2b0[5] = 0x8e;
    aBStack_2b0[6] = 0x54;
    aBStack_2b0[7] = 0xac;
    aBStack_2b0[8] = 9;
    aBStack_2b0[9] = 0x3f;
    aBStack_2b0[10] = 0x65;
    aBStack_2b0[0xb] = 0x5a;
    aBStack_2b0[0xc] = 0x26;
    aBStack_2b0[0xd] = 0x8d;
    aBStack_2b0[0xe] = 0x77;
    aBStack_2b0[0xf] = 0x15;
    aBStack_2b0[0x10] = 0x9e;
    aBStack_2b0[0x11] = 0x68;
    aBStack_2b0[0x12] = 0xbb;
    aBStack_2b0[0x14] = 0xed;
    aBStack_2b0[0x15] = 0x8f;
    aBStack_2b0[0x16] = 0xf0;
    aBStack_2b0[0x17] = 0xb7;
    aBStack_2b0[0x18] = 0xf1;
    aBStack_2b0[0x19] = 0x99;
    aBStack_2b0[0x1a] = 5;
    aBStack_2b0[0x1b] = 0x15;
    aBStack_2b0[0x1c] = 0x80;
    aBStack_2b0[0x1d] = 100;
    aBStack_2b0[0x1e] = 0xa8;
    aBStack_2b0[0x1f] = 0xd8;
    aBStack_2b0[0x20] = 0x87;
    aBStack_2b0[0x21] = 0xc3;
    aBStack_2b0[0x22] = 0x58;
    aBStack_2b0[0x23] = 0xa9;
    aBStack_2b0[0x24] = 0xce;
    aBStack_2b0[0x25] = 0x26;
    aBStack_2b0[0x26] = 0xfe;
    aBStack_2b0[0x27] = 0xb3;
    aBStack_2b0[0x29] = 0xd7;
    aBStack_2b0[0x2a] = 0xa3;
    aBStack_2b0[0x2b] = 0x81;
    aBStack_2b0[0x2c] = 0xbe;
    aBStack_2b0[0x2d] = 0xb8;
    aBStack_2b0[0x2e] = 0x6e;
    aBStack_2b0[0x30] = 0x15;
    aBStack_2b0[0x31] = 0x68;
    aBStack_2b0[0x32] = 0x44;
    aBStack_2b0[0x33] = 0x17;
    aBStack_2b0[0x34] = 0xbe;
    aBStack_2b0[0x35] = 0x81;
    aBStack_2b0[0x36] = 0x80;
    aBStack_2b0[0x37] = 0x75;
    aBStack_2b0[0x38] = 0xa1;
    aBStack_2b0[0x39] = 0xdb;
    aBStack_2b0[0x3a] = 0xab;
    aBStack_2b0[0x3b] = 0x21;
    aBStack_2b0[0x3c] = 0xd1;
    aBStack_2b0[0x3d] = 0x1f;
    aBStack_2b0[0x3e] = 0xbc;
    aBStack_2b0[0x3f] = 0x9c;
    aBStack_2b0[0x40] = 0x1d;
    aBStack_2b0[0x41] = 0x49;
    aBStack_2b0[0x42] = 0xf0;
    aBStack_2b0[0x43] = 0xe5;
    aBStack_2b0[0x44] = 0xdd;
    aBStack_2b0[0x45] = 0x49;
    aBStack_2b0[0x46] = 0x7f;
    aBStack_2b0[0x47] = 0xb5;
    aBStack_2b0[0x48] = 0xe4;
    aBStack_2b0[0x49] = 9;
    aBStack_2b0[0x4a] = 0xf0;
    aBStack_2b0[0x4b] = 0x39;
    aBStack_2b0[0x4c] = 0x94;
    aBStack_2b0[0x5a] = 0x20;
    aBStack_2b0[0x7c] = 0x20;
    aBStack_2b0[0x4d] = 0x2a;
    aBStack_2b0[0x66] = 0x2a;
    aBStack_2b0[0x4e] = 0x6b;
    aBStack_2b0[0x4f] = 0x83;
    aBStack_2b0[0x50] = 0xf;
    aBStack_2b0[0x51] = 0xdb;
    aBStack_2b0[0x52] = 0x56;
    aBStack_2b0[0x53] = 0xe;
    aBStack_2b0[0x54] = 0xa3;
    aBStack_2b0[0x55] = 0x61;
    aBStack_2b0[0x56] = 0x9f;
    aBStack_2b0[0x57] = 0x12;
    aBStack_2b0[0x58] = 0xd4;
    aBStack_2b0[0x59] = 0xd7;
    aBStack_2b0[0x5b] = 0x90;
    aBStack_2b0[0x5c] = 0x54;
    aBStack_2b0[0x5d] = 0x9b;
    aBStack_2b0[0x5e] = 0xc6;
    aBStack_2b0[0x5f] = 0x99;
    aBStack_2b0[0x60] = 0xc;
    aBStack_2b0[0x61] = 0x44;
    aBStack_2b0[0x62] = 3;
    aBStack_2b0[99] = 0xd5;
    aBStack_2b0[100] = 0x1b;
    aBStack_2b0[0x65] = 0x9a;
    aBStack_2b0[0x67] = 0xa0;
    aBStack_2b0[0x68] = 0xa2;
    aBStack_2b0[0x69] = 0x8c;
    aBStack_2b0[0x6a] = 0x1c;
    aBStack_2b0[0x6b] = 0xf6;
    aBStack_2b0[0x6c] = 0x68;
    aBStack_2b0[0x6d] = 0xa5;
    aBStack_2b0[0x6e] = 0x57;
    aBStack_2b0[0x6f] = 0x2e;
    aBStack_2b0[0x70] = 0x11;
    aBStack_2b0[0x71] = 0x40;
    aBStack_2b0[0x72] = 0xa5;
    aBStack_2b0[0x73] = 0x8f;
    aBStack_2b0[0x74] = 0x77;
    aBStack_2b0[0x75] = 0x71;
    aBStack_2b0[0x76] = 0xec;
    aBStack_2b0[0x77] = 0x6a;
    aBStack_2b0[0x78] = 0x69;
    aBStack_2b0[0x79] = 0xa0;
    aBStack_2b0[0x7a] = 0xcb;
    aBStack_2b0[0x7b] = 0x1e;
    aBStack_2b0[0x7d] = 0x8e;
    aBStack_2b0[0x7e] = 0xe0;
    aBStack_2b0[0x7f] = 5;
    puVar15 = &DAT_0096eb20;
  }
  pBVar20 = aBStack_2b0;
  pcStack_22c = (code *)0x0;
  aBStack_2b0[0x83] = 0;
  aBStack_2b0[0x82] = 0;
  aBStack_2b0[0x81] = 0;
  aBStack_2b0[0x80] = 0;
  cbData = 0x88;
  dwType = 3;
  DVar17 = 0;
  pCVar2 = (LPCSTR)FUN_00875080(puVar15);
  RegSetValueExA(local_228,pCVar2,DVar17,dwType,pBVar20,cbData);
  uVar12 = 1;
LAB_00870521:
  RegCloseKey(local_228);
  return uVar12;
}


