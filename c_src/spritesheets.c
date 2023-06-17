
// The following code was generated by the Red Pants Engine
// lets go baby

#include "imagedata.h"
#include "sprites.h"
#include <SDL2/SDL.h>

void spritesheet_load(SDL_Renderer* rend) {
    load_sprite(267, _space, 256, 256, rend);
    load_sprite(76, _beam0, 80, 32, rend);
    load_sprite(77, _beam1, 80, 32, rend);
    load_sprite(83, _beedleship0, 48, 48, rend);
    load_sprite(84, _beedleshipleft0, 48, 48, rend);
    load_sprite(85, _beedleshipright0, 48, 48, rend);
    load_sprite(102, _bream0, 80, 32, rend);
    load_sprite(104, _bulletball, 16, 16, rend);
    load_sprite(109, _bulletflat, 16, 32, rend);
    load_sprite(114, _bulletplus, 16, 16, rend);
    load_sprite(115, _bulletsquig, 16, 32, rend);
    load_sprite(116, _bulletx, 16, 16, rend);
    load_sprite(124, _empty, 16, 16, rend);
    load_sprite(131, _fireball0, 32, 32, rend);
    load_sprite(132, _fireball1, 16, 16, rend);
    load_sprite(140, _fxhit, 16, 16, rend);
    load_sprite(141, _fxhit0, 16, 16, rend);
    load_sprite(142, _fxhit1, 16, 32, rend);
    load_sprite(143, _fxhit2, 16, 32, rend);
    load_sprite(144, _fxhit3, 16, 16, rend);
    load_sprite(145, _fxhit4, 16, 32, rend);
    load_sprite(146, _fxhit5, 16, 32, rend);
    load_sprite(181, _playershot0, 16, 32, rend);
    load_sprite(182, _playershot1, 16, 32, rend);
    load_sprite(183, _playershot2, 16, 32, rend);
    load_sprite(184, _playershot3, 16, 32, rend);
    load_sprite(186, _powerup0, 48, 48, rend);
    load_sprite(187, _powerup1, 48, 48, rend);
    load_sprite(188, _powerup2, 48, 48, rend);
    load_sprite(189, _powerup3, 48, 48, rend);
    load_sprite(192, _quit_selected, 64, 32, rend);
    load_sprite(193, _quit_unselected, 48, 32, rend);
    load_sprite(200, _rockethudplat00, 32, 32, rend);
    load_sprite(201, _rockethudplat01, 32, 32, rend);
    load_sprite(202, _rockethudplat02, 32, 32, rend);
    load_sprite(203, _rockethudplat10, 32, 32, rend);
    load_sprite(204, _rockethudplat11, 32, 32, rend);
    load_sprite(205, _rockethudplat12, 32, 32, rend);
    load_sprite(206, _rockethudplat20, 32, 32, rend);
    load_sprite(207, _rockethudplat21, 32, 32, rend);
    load_sprite(208, _rockethudplat22, 32, 32, rend);
    load_sprite(209, _rocketmenugerder, 16, 80, rend);
    load_sprite(211, _rocketmenuplat00, 32, 32, rend);
    load_sprite(212, _rocketmenuplat01, 32, 32, rend);
    load_sprite(213, _rocketmenuplat02, 32, 32, rend);
    load_sprite(214, _rocketmenuplat10, 32, 32, rend);
    load_sprite(215, _rocketmenuplat11, 32, 32, rend);
    load_sprite(216, _rocketmenuplat12, 32, 32, rend);
    load_sprite(217, _rocketmenuplat20, 32, 32, rend);
    load_sprite(218, _rocketmenuplat21, 32, 32, rend);
    load_sprite(219, _rocketmenuplat22, 32, 32, rend);
    load_sprite(220, _rocketmenustation, 96, 16, rend);
    load_sprite(230, _rockettitle, 256, 80, rend);
    load_sprite(231, _rockettriangle, 32, 32, rend);
    load_sprite(243, _shipbreak0, 48, 64, rend);
    load_sprite(244, _shipleft0, 48, 64, rend);
    load_sprite(245, _shipleft1, 48, 64, rend);
    load_sprite(246, _shipleft2, 48, 64, rend);
    load_sprite(247, _shipright0, 48, 64, rend);
    load_sprite(248, _shipright1, 48, 64, rend);
    load_sprite(249, _shipright2, 48, 64, rend);
    load_sprite(250, _shipstraight0, 48, 64, rend);
    load_sprite(251, _shipstraight1, 48, 64, rend);
    load_sprite(252, _shipstraight2, 48, 64, rend);
    load_sprite(258, _smokeball0, 48, 48, rend);
    load_sprite(259, _smokeball1, 32, 32, rend);
    load_sprite(260, _smokeball2, 16, 16, rend);
    load_sprite(273, _start_selected, 80, 16, rend);
    load_sprite(274, _start_unselected, 64, 16, rend);
    load_sprite(279, _tinybullet, 16, 16, rend);
    load_sprite(285, _triangleman0, 48, 48, rend);
    load_sprite(286, _triangleman1, 48, 48, rend);
    load_sprite(287, _triangleman2, 48, 48, rend);
    load_sprite(288, _triangleman3, 48, 48, rend);
    load_sprite(289, _triangleman4, 48, 48, rend);
    load_sprite(290, _triangleman5, 48, 48, rend);
    add_offset(83, 0, 0);
    add_offset(84, 0, 0);
    add_offset(85, 0, 0);
    add_offset(124, 0, 0);
    add_offset(131, 8, 8);
    add_offset(132, 16, 16);
    add_offset(141, 0, 0);
    add_offset(142, 0, 0);
    add_offset(143, 0, 0);
    add_offset(144, 0, 0);
    add_offset(145, 0, 0);
    add_offset(146, 0, 0);
    add_offset(200, 0, 0);
    add_offset(201, 0, 0);
    add_offset(202, 0, 0);
    add_offset(203, 0, 0);
    add_offset(204, 0, 0);
    add_offset(205, 0, 0);
    add_offset(206, 0, 0);
    add_offset(207, 0, 0);
    add_offset(208, 0, 0);
    add_offset(211, 0, 0);
    add_offset(212, 0, 0);
    add_offset(213, 0, 0);
    add_offset(214, 0, 0);
    add_offset(215, 0, 0);
    add_offset(216, 0, 0);
    add_offset(217, 0, 0);
    add_offset(218, 0, 0);
    add_offset(219, 0, 0);
    add_offset(186, 0, 0);
    add_offset(187, 0, 0);
    add_offset(188, 0, 0);
    add_offset(189, 0, 0);
    add_offset(209, 0, 0);
    add_offset(220, 0, 0);
    add_offset(231, 0, 0);
    add_offset(193, 0, 0);
    add_offset(274, 0, 0);
    add_offset(250, 0, 0);
    add_offset(251, 0, 0);
    add_offset(252, 0, 0);
    add_offset(244, 0, 0);
    add_offset(245, 0, 0);
    add_offset(246, 0, 0);
    add_offset(247, 0, 0);
    add_offset(248, 0, 0);
    add_offset(249, 0, 0);
    add_offset(243, 0, 0);
    add_offset(258, 0, 0);
    add_offset(259, 8, 8);
    add_offset(260, 16, 16);
    add_offset(279, 0, 0);
    add_offset(104, 0, 0);
    add_offset(109, 0, 0);
    add_offset(115, 0, 0);
    add_offset(76, -32, 0);
    add_offset(77, -32, 0);
    add_offset(114, 0, 0);
    add_offset(116, 0, 0);
    add_offset(181, 0, 0);
    add_offset(182, 0, 0);
    add_offset(183, 0, 0);
    add_offset(184, 0, 0);
    add_offset(230, 0, 0);
    add_offset(285, 0, 0);
    add_offset(286, 0, 0);
    add_offset(287, 0, 0);
    add_offset(288, 0, 0);
    add_offset(289, 0, 0);
    add_offset(290, 0, 0);
    add_sprite_map(82);
    add_to_sprite_map(82, 54, 0, 83);
    add_to_sprite_map(82, 15, 0, 83);
    add_to_sprite_map(82, 5, 0, 83);
    add_to_sprite_map(82, 16, 0, 84);
    add_to_sprite_map(82, 17, 0, 85);
    add_to_sprite_map(82, 7, 0, 124);
    add_sprite_map(86);
    add_to_sprite_map(86, 54, 0, 124);
    add_to_sprite_map(86, 60, 0, 124);
    add_to_sprite_map(86, 52, 0, 124);
    add_sprite_map(97);
    add_to_sprite_map(97, 54, 0, 124);
    add_to_sprite_map(97, 48, 0, 124);
    add_sprite_map(99);
    add_to_sprite_map(99, 54, 0, 124);
    add_sprite_map(105);
    add_to_sprite_map(105, 54, 0, 124);
    add_sprite_map(125);
    add_to_sprite_map(125, 54, 0, 131);
    add_to_sprite_map(125, 3, 0, 132);
    add_to_sprite_map(125, 3, 15, 131);
    add_to_sprite_map(125, 3, 30, 132);
    add_sprite_map(134);
    add_to_sprite_map(134, 54, 0, 124);
    add_to_sprite_map(134, 60, 0, 124);
    add_sprite_map(140);
    add_to_sprite_map(140, 54, 0, 141);
    add_to_sprite_map(140, 18, 0, 141);
    add_to_sprite_map(140, 18, 1, 142);
    add_to_sprite_map(140, 18, 2, 143);
    add_to_sprite_map(140, 18, 3, 144);
    add_to_sprite_map(140, 18, 4, 145);
    add_to_sprite_map(140, 18, 5, 146);
    add_sprite_map(160);
    add_to_sprite_map(160, 54, 0, 124);
    add_to_sprite_map(160, 61, 0, 124);
    add_sprite_map(175);
    add_to_sprite_map(175, 26, 0, 200);
    add_to_sprite_map(175, 27, 0, 201);
    add_to_sprite_map(175, 28, 0, 202);
    add_to_sprite_map(175, 29, 0, 203);
    add_to_sprite_map(175, 30, 0, 204);
    add_to_sprite_map(175, 31, 0, 205);
    add_to_sprite_map(175, 32, 0, 206);
    add_to_sprite_map(175, 33, 0, 207);
    add_to_sprite_map(175, 34, 0, 208);
    add_sprite_map(177);
    add_to_sprite_map(177, 26, 0, 200);
    add_to_sprite_map(177, 27, 0, 201);
    add_to_sprite_map(177, 28, 0, 202);
    add_to_sprite_map(177, 29, 0, 203);
    add_to_sprite_map(177, 30, 0, 204);
    add_to_sprite_map(177, 31, 0, 205);
    add_to_sprite_map(177, 32, 0, 206);
    add_to_sprite_map(177, 33, 0, 207);
    add_to_sprite_map(177, 34, 0, 208);
    add_sprite_map(179);
    add_to_sprite_map(179, 26, 0, 211);
    add_to_sprite_map(179, 27, 0, 212);
    add_to_sprite_map(179, 28, 0, 213);
    add_to_sprite_map(179, 29, 0, 214);
    add_to_sprite_map(179, 30, 0, 215);
    add_to_sprite_map(179, 31, 0, 216);
    add_to_sprite_map(179, 32, 0, 217);
    add_to_sprite_map(179, 33, 0, 218);
    add_to_sprite_map(179, 34, 0, 219);
    add_sprite_map(185);
    add_to_sprite_map(185, 54, 0, 186);
    add_to_sprite_map(185, 43, 0, 186);
    add_to_sprite_map(185, 43, 1, 187);
    add_to_sprite_map(185, 43, 3, 188);
    add_to_sprite_map(185, 43, 5, 189);
    add_to_sprite_map(185, 7, 0, 124);
    add_sprite_map(198);
    add_to_sprite_map(198, 54, 0, 124);
    add_to_sprite_map(198, 36, 0, 124);
    add_to_sprite_map(198, 37, 0, 124);
    add_to_sprite_map(198, 38, 0, 124);
    add_to_sprite_map(198, 39, 0, 124);
    add_to_sprite_map(198, 40, 0, 124);
    add_to_sprite_map(198, 41, 0, 124);
    add_sprite_map(209);
    add_to_sprite_map(209, 54, 0, 209);
    add_to_sprite_map(209, 24, 0, 209);
    add_sprite_map(220);
    add_to_sprite_map(220, 54, 0, 220);
    add_to_sprite_map(220, 24, 0, 220);
    add_sprite_map(222);
    add_to_sprite_map(222, 54, 0, 231);
    add_to_sprite_map(222, 24, 0, 231);
    add_sprite_map(224);
    add_to_sprite_map(224, 54, 0, 193);
    add_to_sprite_map(224, 6, 0, 193);
    add_sprite_map(226);
    add_to_sprite_map(226, 54, 0, 124);
    add_to_sprite_map(226, 35, 0, 124);
    add_sprite_map(228);
    add_to_sprite_map(228, 54, 0, 274);
    add_to_sprite_map(228, 6, 0, 274);
    add_sprite_map(238);
    add_to_sprite_map(238, 54, 0, 250);
    add_to_sprite_map(238, 60, 0, 250);
    add_to_sprite_map(238, 15, 0, 250);
    add_to_sprite_map(238, 15, 3, 251);
    add_to_sprite_map(238, 15, 6, 252);
    add_to_sprite_map(238, 16, 0, 244);
    add_to_sprite_map(238, 16, 3, 245);
    add_to_sprite_map(238, 16, 6, 246);
    add_to_sprite_map(238, 17, 0, 247);
    add_to_sprite_map(238, 17, 3, 248);
    add_to_sprite_map(238, 17, 6, 249);
    add_to_sprite_map(238, 5, 0, 243);
    add_sprite_map(257);
    add_to_sprite_map(257, 54, 0, 258);
    add_to_sprite_map(257, 3, 0, 258);
    add_to_sprite_map(257, 3, 15, 259);
    add_to_sprite_map(257, 3, 30, 260);
    add_sprite_map(261);
    add_to_sprite_map(261, 54, 0, 258);
    add_to_sprite_map(261, 3, 0, 258);
    add_to_sprite_map(261, 3, 15, 259);
    add_to_sprite_map(261, 3, 30, 260);
    add_sprite_map(268);
    add_to_sprite_map(268, 54, 0, 124);
    add_to_sprite_map(268, 57, 0, 279);
    add_to_sprite_map(268, 3, 0, 104);
    add_to_sprite_map(268, 53, 0, 109);
    add_to_sprite_map(268, 53, 5, 115);
    add_to_sprite_map(268, 4, 0, 76);
    add_to_sprite_map(268, 4, 3, 77);
    add_to_sprite_map(268, 12, 0, 114);
    add_to_sprite_map(268, 12, 5, 116);
    add_to_sprite_map(268, 51, 0, 181);
    add_to_sprite_map(268, 51, 3, 182);
    add_to_sprite_map(268, 51, 5, 183);
    add_to_sprite_map(268, 51, 8, 184);
    add_to_sprite_map(268, 7, 0, 124);
    add_sprite_map(280);
    add_to_sprite_map(280, 54, 0, 230);
    add_to_sprite_map(280, 24, 0, 230);
    add_sprite_map(284);
    add_to_sprite_map(284, 54, 0, 285);
    add_to_sprite_map(284, 49, 0, 285);
    add_to_sprite_map(284, 49, 8, 286);
    add_to_sprite_map(284, 49, 11, 287);
    add_to_sprite_map(284, 49, 14, 288);
    add_to_sprite_map(284, 49, 17, 289);
    add_to_sprite_map(284, 49, 20, 290);
    add_to_sprite_map(284, 5, 0, 285);
    add_to_sprite_map(284, 7, 0, 124);
    add_sprite_map(295);
    add_to_sprite_map(295, 54, 0, 124);
    add_to_sprite_map(295, 60, 0, 124);
    add_to_sprite_map(295, 52, 0, 124);
}
