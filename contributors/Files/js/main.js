function create_card(pro_url, name, img_url, contri) {
	var root = document.createElement('div');
	root.className = 'card';
	document.getElementById('cards').appendChild(root);

	var anchor_container = document.createElement('a');
	anchor_container.href = pro_url;
	anchor_container.setAttribute("target", "_blank");
	root.appendChild(anchor_container);
	var anchor_img = document.createElement('img');
	anchor_img.src = img_url;
	anchor_container.appendChild(anchor_img);
	var anchor_name = document.createElement('h1');
	anchor_name.innerHTML = name;
	anchor_container.appendChild(anchor_name);

	var contri_display = document.createElement('h2');
	contri_display.innerHTML = "Contributions: " + contri;
	root.appendChild(contri_display);

	var links_main = document.createElement('main');
	root.appendChild(links_main);
	var a_profile = document.createElement('a');
	a_profile.setAttribute("target", "_blank");
	a_profile.href = pro_url;
	a_profile.innerHTML = "Profile";
	links_main.appendChild(a_profile);	

	var a_graph = document.createElement('a');
	a_graph.href = "https://skyline.github.com/" + name + "/2021";
	a_graph.innerHTML = "Graph";
	a_graph.setAttribute("target", "_blank");
	links_main.appendChild(a_graph);
}

fetch("https://api.github.com/repos/cyberbuddy-io/open-source-contribution-for-beginners/contributors?per_page=100")
.then((response) => response.json())
.then((user) => {
	/*let first_contri = document.getElementsByClassName("card")[0].children;
	first_contri[1].href = user[2].html_url;
	first_contri[1].children[1].innerHTML = user[2].login;
	first_contri[2].innerHTML = "Contributions: " + user[2].contributions;*/
/*	console.log(user[0]);
	console.log(first_contri);*/
	for(var i = 3; i <= 100; i++){
		create_card(user[i].html_url, user[i].login, user[i].avatar_url, user[i].contributions);
	}
});